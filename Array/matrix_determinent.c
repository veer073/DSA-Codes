#include<stdio.h>
int main()
{
	printf("This program is made by:Veer Pratap Singh(2100320120184)\n");
	int a[10][10],i,j,k,n,r,c;
	printf("Enter the no. of rows of the matrix:");
	scanf("%d",&r);
	printf("Enter the no. of columns of the matrix:");
	scanf("%d",&c);
	printf("Enter %d elements:",c*r);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
