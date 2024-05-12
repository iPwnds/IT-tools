#ifndef DIGRAPH_H
#define DIGRAPH_H

#include <stdbool.h>

/*****************************************************************************
 *
 * Declaration of the data structures that are used in our graph representation.
 *
 *****************************************************************************/

/* Type for representing a vertex in a linked list of vertices */
typedef struct vertex_s
{
  struct vertex_s *next;

  unsigned id; /* Vertex identifier */
} vertex_t;

/* Type representing a list of vertices */
typedef struct vertices_s
{
  vertex_t *first;
} vertices_t;

/* Type representing an edge in a directed graph. */
typedef struct edge_s
{
  /* Points to the next edge when this edge is part of a linked list. */
  struct edge_s *next;

  unsigned tail;    /* The tail of this edge. */
  unsigned head;    /* The head of this edge. */
  unsigned weight;  /* The weight of this edge. */
} edge_t;

/* Type representing a list of edges */
typedef struct adjacency_list_s
{
  edge_t *first; /* Pointer to the first element of the adjacency list */
} adjacency_list_t;

/* Type representing a graph */
typedef struct graph_s
{
  unsigned vertex_count; /* Number of vertices in this graph. */

  /* Pointer to the first element of an array of adjacency lists. The array
   * is indexed by vertex number
   */
  adjacency_list_t *adjacency_lists;
} graph_t;

/*****************************************************************************
 *
 * Declaration and documentation of the functions that you have to implement.
 * The documentation of each function starts with the function signature.
 *
 *****************************************************************************/

/* -------------------------------------------------------------------
 * edge_t * edge_clone(edge_t *edge)
 * -------------------------------------------------------------------
 *
 * The function 'edge_clone' returns a pointer to a clone of the given edge
 * 'edge'.
 *
 * PRECONDITIONS:
 *   - edge != NULL
 *   - edge has been properly intialised
 *
 * POSTCONDITIONS:
 *   - The tail of the clone equals the tail of the original
 *   - The head of the clone equals the head of the original
 *   - The weight of the clone equals the weight of the original
 *   - The next pointer of the clone is NULL
 *   - Changing anything in the clone must not affect the given edge
 *
 * REMARKS:
 *   - This function dynamically allocates memory for the clone. It becomes the
 *     the responsibility of the caller to release this memory when necessary.
 */
edge_t * edge_clone(const edge_t *edge);

/* -------------------------------------------------------------------
 * bool
 * list_contains(adjacency_list_t list, unsigned head, unsigned tail);
 * -------------------------------------------------------------------
 *
 * The function 'list_contains' returns true if the given adjacency list 'list'
 * contains an edge with the given tail and the given head. Returns false
 * otherwise.
 *
 * PRECONDITIONS:
 *   - list has been properly initialised
 */
bool list_contains(adjacency_list_t list, unsigned head, unsigned tail);

/* -------------------------------------------------------------------
 * adjacency_list_t
 * list_concat(adjacency_list_t l1, adjacency_list_t l2)
 * -------------------------------------------------------------------
 *
 * The function 'list_concat' returns the concatenation of the given lists
 *  'l1' and 'l2'.
 *
 * PRECONDITIONS:
 *   - l1 has been properly initialised
 *   - l2 has been properly initialised
 *
 * POSTCONDITIONS:
 *   - The elements of 'l1' precede the elements of 'l2' in the list
 *     concatenation
 *   - The order of the list elements of the given lists is preserved in the
 *     list concatenation
 *   - Changing anything in the elements of the list concatenation must not 
 *     affect any of the elements of the given lists
 *
 * REMARKS:
 *   - This function dynamically allocates memory for the elements of the
 *     list concatenation. It becomes the responsibility of the caller to
 *     release this memory when necessary.
 *
 * HINT:
 *   - There is probably a (given) utility function and/or a function that you
 *     already implemented that is useful to implement this function.
 */

adjacency_list_t
list_concat(adjacency_list_t l1, adjacency_list_t l2);

/* -------------------------------------------------------------------
 * graph_t graph_create(unsigned vertex_count)
 * -------------------------------------------------------------------
 *
 * The function 'graph_create' returns an initialised graph with 'vertex_count' 
 * number of vertices. It dynamically allocates the necessary memory for
 * 'vertex_count' adjacency lists. This means that the amount of memory to
 * allocate depends on the 'vertex_count' parameter.
 *
 * POSTCONDITIONS:
 *   - if the dynamic memory allocation succeeds
 *     - valid memory has been allocated for the adjacency lists
 *   - all the member variables are correctly initialised
 *
 * REMARKS:
 *   - As mentioned before, this function dynamically allocates memory for
 *     storing the the adjacency lists. It becomes the responsibility of the
 *     caller to release this memory when necessary.
 *   - Don't forget to initialise each adjacency list !
 */
graph_t graph_create(unsigned vertex_count);

/* -------------------------------------------------------------------
 * unsigned graph_edge_count(graph_t graph);
 * -------------------------------------------------------------------
 * 
 * The function 'graph_edge_count' returns the number of edges in the given
 * graph 'graph'.
 *
 * PRECONDITIONS:
 *   - graph has been properly initialised
 */
unsigned graph_edge_count(graph_t graph);

/* ------------------------------------------------------------------------
 * bool graph_are_connected(graph_t graph, unsigned v1, unsigned v2);
 * -----------------------------------------------------------------------
 * 
 * The function 'graph_are_connected' returns true if there is an edge in the
 * given graph 'graph' that connects the given vertices 'v1' and 'v2'.
 *
 * PRECONDITIONS:
 *   - graph has been properly initialised
 */
bool graph_are_connected(graph_t graph, unsigned v1, unsigned v2);

/* ------------------------------------------------------------------------
 * bool graph_average_degree(graph_t graph);
 * -----------------------------------------------------------------------
 * 
 * The function 'graph_average_degree' returns the average degree (rounded
 * towards zero) of the vertices in the graph. The degree of a vertex in a
 * graph is the number of incoming and outgoing edges of the vertex. A self-loop
 * contributes 2 to a vertex's degree.
 *
 * PRECONDITIONS:
 *   - graph has been properly initialised
 */
unsigned graph_average_degree(graph_t graph);

/* ------------------------------------------------------------------------
 * unsigned graph_neighbour_count(graph_t graph, unsigned id);
 * -----------------------------------------------------------------------
 * 
 * The function 'graph_neighbour_count' returns the number of direct neighbours
 * of the given vertex 'id'. A vertex v1 is a direct neighbour of a vertex v2
 * iff
 *      - v1 != v2
 *      - and there exists and edge that connects v1 and v2
 * Note that if there are two or more edges that connect v1 and v2, v1 should
 * be counted once!
 *
 * PRECONDITIONS:
 *   - graph has been properly initialised
 */
unsigned graph_neighbour_count(graph_t graph, unsigned id);

/* ------------------------------------------------------------------------
 * graph_t * graph_reverse(const graph_t * graph);
 * -----------------------------------------------------------------------
 * 
 * The function 'graph_reverse' returns a pointer to a graph where the 
 * direction of the edges of the given graph 'graph' are reversed (i.e., 
 * tail becomes head and head becomes tail).
 * Changing anything in the reversed graph must not affect the given graph.
 *
 * PRECONDITIONS:
 *   - graph != NULL
 *   - graph has been properly initialised
 *
 * POSTCONDITIONS:
 *   - the returned graph has the same number of vertices as the given graph
 *   - the returned graph has the same number of edges as the given graph
 *   - for every edge in the given graph there is an edge in the resulting
 *     graph with head and tail reversed
 *
 * REMARKS:
 *   - This function dynamically allocates memory for the resulting graph. It
 *     becomes the the responsibility of the caller to release this memory
 *     when necessary.
 */
graph_t * graph_reverse(const graph_t * graph);

/* ------------------------------------------------------------------------
 * vertices_t graph_immediate_predecessors(const graph_t * graph, unsigned id);
 * -----------------------------------------------------------------------
 *
 * The function 'graph_immediate_predecessors' returns a list that contains
 * all the vertices that are an immediate predecessor of the given vertex with
 * identifer 'id'. A vertex v1 is an immediate predecessor of a vertex v2 iff
 * there is an edge connecting v1 and v2 where v1 is the tail and v2 is the
 * head.
 *
 * PRECONDITIONS:
 *   - graph has been properly initialised
 *
 * REMARKS:
 *   - The result may contain duplicate values
 *   - This function dynamically allocates memory for the elements of the
 *     resulting linked list. It becomes the the responsibility of the caller
 *     to release this memory when necessary.
 */
vertices_t graph_immediate_predecessors(const graph_t * graph, unsigned id);

/*****************************************************************************
 *
 * Declaration and documentation of the utility and helper functions that we
 * already implemented for you.
 *
 ******************************************************************************/

/* -----------------------------------------
 * edge_t * list_last(adjacency_list_t list)
 * -----------------------------------------
 *
 * The function 'list_last' returns the last element of the given 'list',
 * or NULL if the list is empty.
 */
edge_t * list_last(adjacency_list_t list);

/* ------------------------------------------
 * unsigned list_size(adjacency_list_t list)
 * ------------------------------------------
 *
 * Returns the number of elements in the given adjacency list 'list' 
 * 
 * PRECONDITIONS:
 *   - list has been properly initialised
 */
unsigned list_size(adjacency_list_t list);

/* ------------------------------------------------------
 * void list_append(adjacency_list_t *list, edge_t *edge)
 * ------------------------------------------------------
 *
 * The function 'list_append' inserts the given 'edge' at the end of the given
 * 'list'.
 *
 * PRECONDITIONS:
 *   - list != NULL
 *   - edge != NULL
 *
 * POSTCONDITIONS:
 *    - The given edge is the last element of the given list
 *       (list_last(list) == edge)
 */
void list_append(adjacency_list_t *list, edge_t *edge);

/* --------------------------------------------------
 * unsigned graph_degree(graph_t *graph, unsigned id)
 * --------------------------------------------------
 * 
 * The function 'graph_degree' returns the degree of the vertex with the given
 * identifier 'id' in the given 'graph'. The degree of a vertex in a graph is
 * the number of incoming and outgoing edges of the vertex. A self-loop
 * contributes 2 to a vertex's degree.
 *
 * Returns 0 if the given 'id' does not represent a vertex in the given graph.
 * 
 * PRECONDITIONS:
 *   - graph != NULL
 *   - graph has been properly intialised
 */
unsigned graph_degree(const graph_t *graph, unsigned id);

/* ----------------------------------------------------------------------------
 * bool
 * graph_connect(graph_t graph, unsigned tail, unsigned head, unsigned weight)
 * ----------------------------------------------------------------------------
 *
 * Allocates memory for a new edge and adds it to the given graph.
 *
 * This function initialises the newly allocated edge such that 1) the vertex
 * identified by the parameter 'tail' connects the vertex identified by the
 * parameter 'head', 2) tail points to head, and 3) the edge is weighted
 * with the given weight.
 *
 * The new edge is inserted *at the end* of the correct adjacency list.
 *
 * Returns false when the dynamic memory allocation fails or when the vertices
 * do not exist in the graph. Returns true otherwise.
 *
 * PRECONDITIONS:
 *  - tail < vertex_count
 *  - head < vertex_count
 *  - graph is properly intialised
 */
bool
graph_connect(graph_t graph, unsigned tail, unsigned head, unsigned weight);

/* ----------------------------------
 * void graph_release(graph_t graph)
 * ----------------------------------
 *
 * The function 'graph_release' releases the memory that was previously
 * allocated by calls to graph_create and graph_connect on this graph
 * (i.e., the memory for the adjacency lists and for the edges). This function
 * also updates the member fields of the given graph such that it represent an
 * empty graph.
 *
 * PRECONDITIONS: 
 *  - the memory used by the given graph is valid and was previously allocated
 *    via calls to graph_create and graph_connect
 *
 * POSTCONDITIONS
 *  - the memory previously occupied is made available again for allocation
 *  - graph.vertex_count == 0
 *  - graph.adjacency_lists == NULL
 */
void graph_release(graph_t graph);

/* --------------------------------
 * void graph_print(graph_t *graph)
 * --------------------------------
 *
 * Prints the given graph to the standard output stream.
 *
 * First the number of vertices and the number of edges is printed
 * according to the following format:
 *
 * "Graph with " <vertex_count> " vertices and " <edge_count> " edges:"
 *
 * then a newline,
 *
 * and then for every vertex, its identifier is printed, in the following
 * way
 *
 * "vertex" <id>:
 *
 * followed by all the edges whose tail is the vertex. Every edge is
 * printed on a separate line, preceded by two spaces.
 *
 * Example: A graph with two vertices and one edge with tail 1, head 0 and
 *          weight 0 is printed as follows:
 *
 * Graph with 2 vertices and 1 edges:
 * vertex 0:
 * vertex 1:
 *   1 -> 0 (0)
 *
 * PRECONDITIONS: 
 *  - graph != NULL
 *
 * REMARKS:
 *  - This function only works properly if the implementation of the function
 *    graph_edge_count is correct.
 */
void graph_print(const graph_t *graph);

#endif
