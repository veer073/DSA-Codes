#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
	int i,j,a[10][10],temp;
   	printf("Enter the elements of matrix\n");
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLS;j++)
		{
			scanf("%d",&a[i][j]);
		}
    printf("Original matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < ROWS; i++) {
        for (j = i + 1; j < COLS; j++) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    printf("\nTransposed matrix:\n");
    for ( i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
}

