#include<stdio.h>
void main()
{
	int a[10][10], m, n, i, j, b[10][10], p, q, c[10][10], k;
	printf("Enter the number of rows of matrix A. ");
	scanf("%d", &m);
	printf("Enter the number of columns of matrix A. ");
	scanf("%d", &n);
	printf("Enter the elements of matrix A.\n");
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
		{
			printf("Enter element a[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
	}
	}
	printf("\nFirst matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the number of rows of matrix B. ");
	scanf("%d", &p);
	printf("Enter the number of columns of matrix B. ");
	scanf("%d", &q);
	if(n==p)
	{
		printf("Enter the elements of matrix B.\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("Enter element b[%d][%d] : ", i, j);
				scanf("%d", &b[i][j]);
			}
		}
		printf("\nSecond matrix is\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d ", b[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				c[i][j]=0;
				for(k=0;k<n;k++)
				{
					c[i][j]=c[i][j]+ a[i][k]*b[k][j];
				}
			}
		}
		printf("Matrix multiplication is\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
	}
	else
	printf("Multiplication is not possible. ");
	printf("\n\nThis program is made by Veer Pratap Singh \nRoll no. 2100320120184");
}
