#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTICES 50

typedef struct Graph_t {
    int V;
    bool adj[MAX_VERTICES][MAX_VERTICES];
} Graph;

Graph* Graph_create(int V) {
    Graph* g = malloc(sizeof(Graph));
    g->V = V;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            g->adj[i][j] = false;
        }
    }
    return g;
}

void Graph_destroy(Graph* g) {
    free(g);
}

void Graph_addEdge(Graph* g, int v, int w) {
    g->adj[v][w] = true;
}

void Graph_DFS(Graph* g, int s) {
    bool visited[MAX_VERTICES + 1] = { false };
    int stack[MAX_VERTICES];
    int top = -1;

    stack[++top] = s;

    while (top != -1) {
        s = stack[top--];

        if (!visited[s]) {
            printf("%d ", s);
            visited[s] = true;
        }

        for (int adjacent = 0; adjacent < g->V; adjacent++) {
            if (g->adj[s][adjacent] && !visited[adjacent]) {
                stack[++top] = adjacent;
            }
        }
    }
}

int main() {
    int no_of_vertices;
    printf("Enter the no. of vertices in graph: ");
    scanf("%d", &no_of_vertices);
    Graph* g = Graph_create(no_of_vertices);

    int choice, sv, dv;
    while (1) {
        printf("Enter choice \n1. Add Edge\n2. DFS\n-1. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the source vertex: ");
                scanf("%d", &sv);
                printf("Enter the destination vertex: ");
                scanf("%d", &dv);
                Graph_addEdge(g, sv, dv);
                break;
            case 2:
                printf("Enter the source vertex: ");
                scanf("%d", &sv);
                printf("Following is Depth First Traversal (starting from vertex %d):\n", sv);
                Graph_DFS(g, sv);
                printf("\n");
                break;
            case -1:
                printf("Exiting\n");
                Graph_destroy(g);
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
