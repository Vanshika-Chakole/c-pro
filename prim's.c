// C Program to Implement Prim's Algorithm

#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

// Define Number of vertices in the graph
#define V 5

// Function to find the vertex with the minimum weight
int minweight(int weight[], bool visited[])
{
    int min = INT_MAX, min_index;
    int v;
    for( v=0;v<V;v++) {
        if (visited[v] == false && weight[v] < min) {
            min = weight[v];
            min_index = v;
        }
    }
    return min_index;
}

// Function to print the constructed MST and its total cost
void printMST(int parent[], int graph[V][V])
{
    int totalCost = 0;

    printf("MST for the graph:\n");
    printf("Edge \tWeight\n");
    int i;
	for( i=1; i<V;i++) {
        printf("%d - %d \t%d \n", parent[i], i,
               graph[i][parent[i]]);
        totalCost += graph[i][parent[i]];
    }
    printf("Total cost of MST: %d\n", totalCost);
}

// Function to construct and print MST for a graph
// represented using adjacency matrix representation
void primMST(int graph[V][V])
{
    // Array to store constructed MST
    int parent[V];
    // Array to store the weights
    int weight[V];
    // To represent set of vertices included in MST
    bool visited[V];

    // Initialize all weights as INFINITE
    int i;
    for( i = 0; i < V; i++) {
        weight[i] = INT_MAX;
        visited[i] = false;
    }

    // Always include the first 1st vertex in MST.
    weight[0] = 0;
    parent[0] = -1;

    // The MST will have V vertices
    int count;
    for ( count = 0; count < V - 1; count++) {
        // Pick the minimum weight vertex from the set of
        // vertices not yet included in MST
        int u = minweight(weight, visited);

        // Add the picked vertex to the MST Set
        visited[u] = true;

        // Consider only those vertices which are not yet
        // included in MST
        int v;
		for ( v = 0; v < V; v++) {
            if (graph[u][v] && visited[v] == false
                && graph[u][v] < weight[v]) {
                parent[v] = u;
                weight[v] = graph[u][v];
            }
        }
    }

    // Print the constructed MST and its total cost
    printMST(parent, graph);
}

int main()
{
    /* Let us create the following graph
        2    3
    (0)--(1)--(2)
    |   / \   |
    6| 8/   \5 |7
    | /     \ |
    (3)-------(4)
          9          */
    int graph[V][V] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };

    // Print the MST
    primMST(graph);

    return 0;
}
