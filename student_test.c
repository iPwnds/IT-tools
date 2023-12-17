#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>

#include "test.h"
#include "graph.h"

#define TEST(expr) test(expr, __FILE__, __LINE__, #expr)
#define TESTQ(expr) testq(expr, __FILE__, __LINE__)

static struct 
{
  int pass;
  int fail;
} stats;

/****************************************************************************/
static void test(bool pass, char *file, int line, char *expr)
{
  if (pass)
  {
    stats.pass++;
  }
  else
  {
    stats.fail++;
    fprintf(stderr, "%s:%3d: Fail '%s'\n", file, line, expr);
  }
}

/****************************************************************************/
static void testq(bool pass, char *file, int line)
{
  if (pass)
  {
    stats.pass++;
  }
  else
  {
    stats.fail++;
    fprintf(stderr, "%s:%d: Fail\n", file, line);
  }
}

/****************************************************************************/
static void test_edge_clone(void)
{
  // Create an edge
  edge_t e;
  e.tail   = 0;
  e.head   = 1;
  e.weight = 1;

  // Clone the edge
  edge_t *clone = edge_clone(&e);

  // Check that the clone is correct
  TEST(clone != NULL);
  TEST(clone->tail == e.tail);
  TEST(clone->head == e.head);
  TEST(clone->weight == e.weight);
  TEST(clone->next == NULL);

  // Free the clone
  free(clone);
}

/****************************************************************************/
static void test_list_contains(void)
{
  // Create a list
  adjacency_list_t list;
  edge_t e1;
  edge_t e2;

  e1.tail   = 0;
  e1.head   = 1;
  e1.weight = 1;

  e2.tail   = 1;
  e2.head   = 2;
  e2.weight = 1;

  list.first = &e1;
  e1.next = &e2;
  e2.next = NULL;

  // Check that the list contains the edge
  TEST(list_contains(list, 0, 1));
  TEST(list_contains(list, 1, 2));

  // Check that the list does not contain the edge
  TEST(!list_contains(list, 0, 0));
  TEST(!list_contains(list, 1, 1));
  TEST(!list_contains(list, 2, 2));
}

/****************************************************************************/
static void test_list_concat(void)
{
  // Create a list
  adjacency_list_t l1, l2;
  edge_t e;

  e.tail   = 0;
  e.head   = 1;
  e.weight = 1;
  e.next = NULL;

  l1.first = &e;

  // Concatenate the list with itself
  l2 = list_concat(l1, l1);

  // Check that the concatenated list is correct
  TEST(l2.first != NULL);
  TEST(l2.first->next != NULL);
  TEST(l2.first->next->head == 1);
  TEST(l2.first->next->next == NULL);
}

/****************************************************************************/
static void test_graph_create(void)
{
  // Create a graph
  graph_t g;

  g = graph_create(42);

  // Check that the graph is correct
  TEST(g.vertex_count == 42);
  TEST(g.adjacency_lists != NULL);
}

/****************************************************************************/
static void test_graph_average_degree(void)
{
  // Create a graph
  graph_t g;

  g = graph_create(42);

  // Check that the average degree is correct
  TEST(graph_average_degree(g) == 0);
}

/****************************************************************************/
static void test_graph_edge_count(void)
{
  // Create a graph
  edge_t e;

  e.next = NULL; 
  e.tail = 0;
  e.head = 1;
  e.weight = 1;

  adjacency_list_t adjacency_lists[2];
  adjacency_lists[0].first = &e;
  adjacency_lists[1].first = NULL;

  graph_t g;
  g.vertex_count = 2;
  g.adjacency_lists = adjacency_lists;

  // Check that the edge count is correct
  TEST(graph_edge_count(g) == 1);
}

/****************************************************************************/
static void test_graph_are_connected(void)
{
  // Create a graph
  edge_t e;

  e.next = NULL; 
  e.tail = 0;
  e.head = 1;
  e.weight = 1;

  adjacency_list_t adjacency_lists[3];
  adjacency_lists[0].first = &e;
  adjacency_lists[1].first = NULL;
  adjacency_lists[2].first = NULL;

  graph_t g;
  g.vertex_count = 3;
  g.adjacency_lists = adjacency_lists;

  // Check that the vertices are connected
  TEST(graph_are_connected(g, 0, 1));
  TEST(graph_are_connected(g, 1, 0));

  // Check that the vertices are not connected
  TEST(!graph_are_connected(g, 0, 2));
  TEST(!graph_are_connected(g, 2, 0));
  TEST(!graph_are_connected(g, 1, 2));
  TEST(!graph_are_connected(g, 2, 1));
}

/****************************************************************************/
static void test_graph_neighbour_count(void)
{
  // Create a graph
  edge_t e;

  e.next = NULL; 
  e.tail = 0;
  e.head = 1;
  e.weight = 1;

  adjacency_list_t adjacency_lists[3];
  adjacency_lists[0].first = &e;
  adjacency_lists[1].first = NULL;
  adjacency_lists[2].first = NULL;

  graph_t g;
  g.vertex_count = 3;
  g.adjacency_lists = adjacency_lists;

  // Check that the neighbour count is correct
  TEST(graph_neighbour_count(g, 0) == 1);
  TEST(graph_neighbour_count(g, 1) == 0);
  TEST(graph_neighbour_count(g, 2) == 0);
}

/****************************************************************************/
static void test_graph_reverse(void)
{
  // Already tested in ta_test.c
}

/****************************************************************************/
static void test_graph_immediate_predecessors(void)
{
  // Already tested in ta_test.c
}

/****************************************************************************/
void student_test(void)
{
  memset(&stats, 0, sizeof(stats));

  test_edge_clone();
  test_list_contains();
  test_list_concat();
  test_graph_create();
  test_graph_average_degree();
  test_graph_edge_count();
  test_graph_are_connected();
  test_graph_neighbour_count();
  test_graph_reverse();
  test_graph_immediate_predecessors();

  fprintf(stdout,
          "Student test suite: %d of %d passed\n",
          stats.pass,
          stats.pass + stats.fail);
}
