#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>

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
static void test_list_contains(void)
{
  adjacency_list_t l;
  edge_t e1;
  edge_t e2;

  e1.tail   = 0;
  e1.head   = 1;
  e1.weight = 1;

  e2.tail   = 1;
  e2.head   = 2;
  e2.weight = 1;

  l.first = &e1;
  e1.next = &e2;
  e2.next = NULL;

  TEST(list_contains(l, 0, 1));
  //TEST(!list_contains(l, 0, 0));
}

/****************************************************************************/
static void test_list_concat(void)
{
  adjacency_list_t l1, l2;
  edge_t e;

  e.tail   = 0;
  e.head   = 1;
  e.weight = 1;
  e.next = NULL;

  l1.first = &e;

  l2 = list_concat(l1, l1);
  TEST(l2.first != NULL);
  //TEST(l2.first->next != NULL);
  //TEST(l2.first->next->head == 1);
  //TEST(l2.first->next->next == NULL);
}

/****************************************************************************/
static void test_graph_create(void)
{
  graph_t g;

  g = graph_create(42);
  TEST(g.vertex_count == 42);
  TEST(g.adjacency_lists != NULL);
}

/****************************************************************************/
static void test_graph_average_degree(void)
{
  graph_t g;

  g.vertex_count = 0;
  g.adjacency_lists = NULL;
  TEST(graph_average_degree(g) == 0);
}

/****************************************************************************/
static void test_graph_edge_count(void)
{
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

  TEST(graph_edge_count(g) == 1);
}

/****************************************************************************/
static void test_graph_are_connected(void)
{
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

  TEST(graph_are_connected(g, 1, 0));
  //TEST(!graph_are_connected(g, 0, 2));
}

/****************************************************************************/
static void test_graph_neighbour_count(void)
{
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

  TEST(graph_neighbour_count(g, 0) == 1);
  TEST(graph_neighbour_count(g, 1) == 1);
  TEST(graph_neighbour_count(g, 2) == 0);
}

/****************************************************************************/
static void test_graph_reverse(void)
{
  edge_t e;

  e.next = NULL; 
  e.tail = 0;
  e.head = 0;
  e.weight = 1;

  adjacency_list_t l;
  l.first = &e;

  graph_t g1, *g2;
  g1.vertex_count = 1;
  g1.adjacency_lists = &l;

  g2 = graph_reverse(&g1);
  if (g2 != NULL)
  {
    TEST(g2->vertex_count == 1);
  }
}

/****************************************************************************/
static void test_graph_immediate_predecessors(void)
{
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

  vertices_t vs = graph_immediate_predecessors(&g, 1);
  TEST(vs.first != NULL);
  //TEST(vs.first->next == NULL);
  //TEST(vs.first->id == 0);
}

/****************************************************************************/
void ta_test(void)
{
  memset(&stats, 0, sizeof(stats));

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
          "TA test suite: %d of %d passed\n",
          stats.pass,
          stats.pass + stats.fail);
}
