#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
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
static void test_edge_clone(void)
{
  /* Add your own test here (see ta_test.c for some inspiration) */
}

/****************************************************************************/
static void test_list_contains(void)
{
  /* Add your own test here (see ta_test.c for some inspiration) */
}

/****************************************************************************/
static void test_list_concat(void)
{
  /* Add your own test here (see ta_test.c for some inspiration) */
}

/****************************************************************************/
static void test_graph_create(void)
{
  /* Add your own test here (see ta_test.c for some inspiration) */
}

/****************************************************************************/
static void test_graph_average_degree(void)
{
  /* Add your own test here (see ta_test.c for some inspiration) */
}

/****************************************************************************/
static void test_graph_edge_count(void)
{
  /* Add your own test here (see ta_test.c for some inspiration) */
}

/****************************************************************************/
static void test_graph_are_connected(void)
{
  /* Add your own test here (see ta_test.c for some inspiration) */
}

/****************************************************************************/
static void test_graph_neighbour_count(void)
{
  /* Add your own test here (see ta_test.c for some inspiration) */
}

/****************************************************************************/
static void test_graph_reverse(void)
{
  /* Add your own test here (see ta_test.c for some inspiration) */
}

/****************************************************************************/
static void test_graph_immediate_predecessors(void)
{
  /* Add your own test here (see ta_test.c for some inspiration) */
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
