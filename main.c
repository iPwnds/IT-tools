#include <stdio.h>
#include <stdlib.h>

#include "graph.h"
#include "test.h"

int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 0);

  /* 1. Run ta tests */
  fprintf(stdout, "--------------------------------------------------------\n");
  fprintf(stdout, "TA test suite\n");
  fprintf(stdout, "--------------------------------------------------------\n");
  ta_test();

  /* 2. How to use the graph API */
  fprintf(stdout, "\n");
  fprintf(stdout, "--------------------------------------------------------\n");
  fprintf(stdout, "Example code\n");
  fprintf(stdout, "--------------------------------------------------------\n");

  /* 2.1 Create a directed graph that contains four vertices. */
  graph_t graph = graph_create(4);

  if (graph.vertex_count > 0)
  {
    /* 2.2 Connect vertex 0 (tail) to vertex 1 (head) with weight 1 */
    if (! graph_connect(graph, 0, 1, 1))
    {
      fprintf(stderr, "graph_connect() failed\n");
    }

    /* 2.3 Create more connections.
     *
     * NOTE: In general it is bad practice to ignore the return code of
     *       functions. We do it here to keep the example code compact.
     */
    (void) graph_connect(graph, 1, 1, 2);
    (void) graph_connect(graph, 1, 2, 2);
    (void) graph_connect(graph, 2, 3, 3);
    (void) graph_connect(graph, 3, 0, 0);

    /* 2.4 Print the graph */
    graph_print(&graph);

    printf("\n");

    /* 2.5 Print average degree */
    printf("The average degree of the graph is %u\n", graph_average_degree(graph));

    /* 2.6 Are vertices 2 and 3 connected ? */
    if (graph_are_connected(graph, 2, 3))
    {
      printf("Vertex 2 is connected with vertex 3\n");
    }
    else
    {
      printf("Vertex 2 is not connected with vertex 3\n");
    }

    /* 2.6 Print neighbour count for vertex 1 */
    printf("Vertex 1 has %d neighbours\n", graph_neighbour_count(graph, 1));

    /* 2.7 Print immediate predecessors of vertex 1 */
    printf("The immediate predecessors of vertex 1 are ");
    vertices_t vs = graph_immediate_predecessors(&graph, 1);
    for (vertex_t * v = vs.first; v != NULL; v = v->next)
    {
      printf("%u, ", v->id);
    }
    printf("\n");

    /* 2.8 Print the reversed graph */
    printf("\nThe reversed graph:\n");
    graph_t * reversed = graph_reverse(&graph);
    graph_print(reversed);

    /* 2.8 Release the memory that was allocated for the graphs */
    graph_release(graph);
    graph_release(*reversed);
    free(reversed);
  }

  /* 3. Run student tests */
  fprintf(stdout, "\n");
  fprintf(stdout, "--------------------------------------------------------\n");
  fprintf(stdout, "Student test suite\n");
  fprintf(stdout, "--------------------------------------------------------\n");

  student_test();

  return 0;
}
