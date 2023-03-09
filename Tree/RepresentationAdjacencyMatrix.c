#include <stdio.h>

int main() {
    int n, e, i, j, v1, v2;
    printf("Enter the number of vertices and edges in the graph: ");
    scanf("%d %d", &n, &e);

    int adjMat[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            adjMat[i][j] = 0;
        }
    }

    for (i = 0; i < e; i++) {
        printf("Enter the endpoints of edge %d: ", i+1);
        scanf("%d %d", &v1, &v2);
        adjMat[v1][v2] = 1;
        adjMat[v2][v1] = 1;
    }

    printf("Adjacency Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", adjMat[i][j]);
        }
        printf("\n");
    }
	printf("\nThe program is run by Veer Pratap Singh(2100320120184)\n");
    return 0;
}

