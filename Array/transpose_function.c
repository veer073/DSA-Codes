#include<stdio.h>
void transpose(int a[10][10], int r,int c)
{
	int i,j,b[10][10];
	/*	printf("Enter the number of row of matrix\n");
	scanf("%d",&r);
	printf("Enter the number of column of matrix\n");
	scanf("%d",&c);*/
	printf("Enter the elements of matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("The matrix is:\n");
		for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			b[i][j]=a[j][i];
		}
		
	}
	printf("The transpose of the given matrix is:\n");
		for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	

}
int main()
{
	int a[10][10],r,c;
	printf("Enter rows:");
	scanf("%d",&r);
	printf("Enter column:");
	scanf("%d",&c);
	transpose(a,r,c);
	return 0;
}
