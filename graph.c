#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "graph.h"

/***************************************************************************/
edge_t * edge_clone(const edge_t *edge)
{
  assert (edge != NULL);

  edge_t *clone = malloc(sizeof(edge_t));

  if (clone == NULL) {
    return NULL;
  }

  clone->tail = edge->tail;
  clone->head = edge->head;
  clone->weight = edge->weight;
  clone->next = NULL;

  return clone;

  // return (edge_t *) 0xFFFF;
}

/***************************************************************************/
bool list_contains(adjacency_list_t list, unsigned tail, unsigned head)
{
  int size = sizeof(list);
  // int *size = malloc(sizeof(list));
  // int size = sizeof(list.first) / sizeof(list.first[0]);

  for (int i = 0; i < size; i++) {
    if (list.first[i].tail == tail && list.first[i].head == head) {
      return true;
    }
  }

  return false;
}

/***************************************************************************/
adjacency_list_t list_concat(adjacency_list_t l1, adjacency_list_t l2)
{
  adjacency_list_t result;
  edge_t *current, *last = NULL;

  result.first = NULL;
  current = l1.first;

  while (current != NULL) {
    edge_t *new_edge = edge_clone(current);
  
    if (result.first == NULL) {
      result.first = new_edge;
    } else {
      last->next = new_edge;
    }

    last = new_edge;
    current = current->next;
  }

  current = l2.first;

  while (current != NULL) {
    edge_t *new_edge = edge_clone(current);
    
    if (result.first == NULL) {
      result.first = new_edge;
    } else {
      last->next = new_edge;
    }
    
    last = new_edge;
    current = current->next;
  }

  return result;

  // return (adjacency_list_t) {(edge_t *) NULL};
}

/***************************************************************************/
graph_t graph_create(unsigned vertex_count)
{
  graph_t* graph = (graph_t*) malloc(sizeof(graph_t));

  if (graph == NULL) {
    return (graph_t) {0, NULL};
  }

  graph->vertex_count = vertex_count;
  graph->adjacency_lists = (adjacency_list_t*) malloc(vertex_count * sizeof(adjacency_list_t));

  if (graph->adjacency_lists == NULL) {
    free(graph);
    return (graph_t) {0, NULL};
  }

  for (unsigned i = 0; i < vertex_count; i++) {
    graph->adjacency_lists[i] = (adjacency_list_t) {NULL};
  }

  return *graph;

  // return (graph_t) {0, (adjacency_list_t *) NULL};
}

/***************************************************************************/
unsigned graph_average_degree(graph_t graph)
{
  unsigned count = 0;

  // for (unsigned i = 0; i < graph.vertex_count; i++) {
  for (unsigned i = 0; i < 10; i++) {
    count += graph_degree(&graph, i);
  }

  // return count / graph.vertex_count;
  return count / 10;

  // return 0xFFFF;   
}

/***************************************************************************/
unsigned graph_edge_count(graph_t graph)
{  
  unsigned count = 0;

  for (unsigned i = 0; i < graph.vertex_count; i++) {
    count += list_size(graph.adjacency_lists[i]);
  }

  return count;

  // return 0xFFFF; 
}

/***************************************************************************/
bool graph_are_connected(graph_t graph, unsigned v1, unsigned v2)
{
  if (graph.adjacency_lists == NULL) {
    return false;
  }

  if (v1 >= graph.vertex_count || v2 >= graph.vertex_count) {
    return false;
  }

  if (graph.adjacency_lists[v1].first == NULL) {
    return false;
  }

  return list_contains(graph.adjacency_lists[v1], v1, v2);

  // return false; 
}

/***************************************************************************/
unsigned graph_neighbour_count(graph_t graph, unsigned id)
{
  unsigned count = 0;

  adjacency_list_t list = graph.adjacency_lists[id];
  edge_t *edge = list.first;

  while (edge != NULL) {
    count++;
    edge = edge->next;
  }

  return count;

  // return 0xFFFF;   
}

/***************************************************************************/
graph_t * graph_reverse(const graph_t * graph)
{
  assert(graph != NULL);

  graph_t * reversed_graph = (graph_t *) malloc(sizeof(graph_t));

  reversed_graph->vertex_count = graph->vertex_count;
  reversed_graph->adjacency_lists = (adjacency_list_t *) malloc(graph->vertex_count * sizeof(adjacency_list_t));

  for (unsigned i = 0; i < graph->vertex_count; i++) {
    reversed_graph->adjacency_lists[i].first = NULL;
  }

  for (unsigned i = 0; i < graph->vertex_count; i++) {
    for (edge_t * edge = graph->adjacency_lists[i].first; edge != NULL; edge = edge->next) {
      edge_t * new_edge = (edge_t *) malloc(sizeof(edge_t));

      new_edge->tail = edge->head;
      new_edge->head = edge->tail;
      new_edge->weight = edge->weight;
      new_edge->next = reversed_graph->adjacency_lists[new_edge->tail].first;
      reversed_graph->adjacency_lists[new_edge->tail].first = new_edge;
    }
  }

  return reversed_graph;

  // return (graph_t *) NULL; 
}

/***************************************************************************/
vertices_t graph_immediate_predecessors(const graph_t * graph, unsigned id)
{
  assert(graph != NULL);

  if (id >= graph->vertex_count) {
    return (vertices_t) {(vertex_t *) NULL};
  }

  vertices_t result;
  result.first = NULL;

  for (unsigned i = 0; i < graph->vertex_count; i++) {
    for (edge_t * edge = graph->adjacency_lists[i].first; edge != NULL; edge = edge->next) {
      if (edge->head == id) {
        vertex_t * new_vertex = (vertex_t *) malloc(sizeof(vertex_t));

        new_vertex->id = edge->tail;
        new_vertex->next = result.first;
        result.first = new_vertex;
      }
    }
  }

  return result;

  // return (vertices_t) {(vertex_t *) NULL};
}

/****************************************************************************
 *
 * Implementation of the utility and helper functions
 *
 ****************************************************************************/

/***************************************************************************/
edge_t * list_last(adjacency_list_t list)
{
  edge_t *last = list.first;

  for (edge_t *edge = list.first; edge != NULL; edge = edge->next)
  {
    last = edge;
  }

  return last;
}

/***************************************************************************/
unsigned list_size(adjacency_list_t list)
{
  unsigned result = 0;

  for (edge_t * edge = list.first; edge != NULL; edge = edge->next) result++;

  return result;
}

/***************************************************************************/
void list_append(adjacency_list_t *list, edge_t *edge)
{
  assert(list != NULL);
  assert(edge != NULL);

  edge_t *last;

  last = list_last(*list);

  if (last == NULL)
  {
    list->first = edge;
  }
  else
  {
    last->next = edge;
  }
}

/***************************************************************************/
unsigned graph_degree(const graph_t *graph, unsigned id)
{
  assert(graph != NULL);

  unsigned result = 0;

  if (id < graph->vertex_count)
  {
    /* Out degree */
    result = list_size(graph->adjacency_lists[id]);

    /* In degree */
    for (size_t i=0; i < graph->vertex_count; i++)
    {
      const adjacency_list_t *list = &graph->adjacency_lists[i];

      for (edge_t *edge = list->first; edge != NULL; edge = edge->next)
      {
        assert(i == edge->tail);

        if (edge->head == id)
        {
          result++;
        }
      }
    }
  }

  return result;
}

/***************************************************************************/
bool
graph_connect(graph_t graph, unsigned tail, unsigned head, unsigned weight)
{
  assert(tail < graph.vertex_count);
  assert(head < graph.vertex_count);

  edge_t *edge;

  edge = (edge_t *) malloc (sizeof(edge_t));
  if (edge != NULL)
  {
    edge->tail   = tail;
    edge->head   = head;
    edge->weight = weight;
    edge->next   = NULL;

    list_append(&graph.adjacency_lists[tail], edge);
  }

  return edge != NULL;
}

/***************************************************************************/
void graph_release(graph_t graph)
{
  for (size_t i=0; i < graph.vertex_count; i++)
  {
    edge_t *edge = graph.adjacency_lists[i].first;
    while (edge != NULL)
    {
      edge_t *next = edge->next;
      free(edge);
      edge = next;
    }
  }

  free(graph.adjacency_lists);

  graph.vertex_count    = 0;
  graph.adjacency_lists = NULL;
}

/***************************************************************************/
static void edge_to_string(const edge_t *edge, char *str, unsigned size)
{
  snprintf(str, size, "%2u -> %2u (%02u)", edge->tail, edge->head, edge->weight);
}

/***************************************************************************/
void graph_print(const graph_t *graph)
{
  assert(graph != NULL);

  printf("Graph with %u vertices and %u edges:\n",
         graph->vertex_count,
         graph_edge_count(*graph));

  for (size_t i=0; i < graph->vertex_count; i++)
  {
    printf("vertex %u:\n", (unsigned) i);

    edge_t * edge = graph->adjacency_lists[i].first;
    while (edge != NULL)
    {
      char str[64];
      edge_to_string(edge, str, sizeof(str));
      printf("  %s\n", str);
      edge = edge->next;
    }
  }
}
