#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "graph.h"

/***************************************************************************/
edge_t * edge_clone(const edge_t *edge)
{
  assert (edge != NULL);

  return (edge_t *) 0xFFFF; // TODO: Replace with your own implementation
}

/***************************************************************************/
bool list_contains(adjacency_list_t list, unsigned tail, unsigned head)
{
  return false; // TODO Replace with your own implementation
}
/***************************************************************************/
adjacency_list_t list_concat(adjacency_list_t l1, adjacency_list_t l2)
{
  // TODO: Replace with your own implementation
  return (adjacency_list_t) {(edge_t *) NULL};
}

/***************************************************************************/
graph_t graph_create(unsigned vertex_count)
{
  // TODO: Replace with your own implementation
  return (graph_t) {0, (adjacency_list_t *) NULL};
}

/***************************************************************************/
unsigned graph_average_degree(graph_t graph)
{
  return 0xFFFF; // TODO Replace with your own implementation
}

/***************************************************************************/
unsigned graph_edge_count(graph_t graph)
{
  return 0xFFFF; // TODO: Replace with your own implementation
}

/***************************************************************************/
bool graph_are_connected(graph_t graph, unsigned v1, unsigned v2)
{
  return false; // TODO: Replace with your own implementation
}

/***************************************************************************/
unsigned graph_neighbour_count(graph_t graph, unsigned id)
{
  return 0xFFFF; // TODO: Replace with your own implementation
}

/***************************************************************************/
graph_t * graph_reverse(const graph_t * graph)
{
  assert(graph != NULL);

  return (graph_t *) NULL; // TODO: Replace with your own implementation
}

/***************************************************************************/
vertices_t graph_immediate_predecessors(const graph_t * graph, unsigned id)
{
  // TODO: Replace with your own implementation
  return (vertices_t) {(vertex_t *) NULL};
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
