#include<stdio.h>
void main()
{
	int a[10][10], m, n, i, j, b[10][10];
	printf("Enter the number of rows of matrix. ");
	scanf("%d", &m);
	printf("Enter the number of columns of matrix. ");
	scanf("%d", &n);
	printf("Enter the elements of matrix.\n");
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("Enter element a[%d][%d] : ", i, j);
				scanf("%d", &a[i][j]);
			}
		}
	printf("The matrix is\n");
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
			{
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("Transpose of given matrix is\n");
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ", b[i][j]);
			}
		printf("\n");
	}
	printf("\n\nThis program is made by Veer Pratap Singh \nRoll no. 2100320120184");
}
