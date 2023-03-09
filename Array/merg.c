#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],i,j,k,na,nb;
		printf("Enter the size of array a:\n");
	scanf("%d",&na);
	
	printf("Enter the elements of array a in increasing order:\n");
	for(i=0;i<na;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("Enter the size of array b:\n");
	scanf("%d",&b);
	
	printf("Enter the elements of array b in increasing order:\n");
	for(j=0;j<nb;j++)
	{
		scanf("%d",&b[j]);
	}
	return 0;
}
