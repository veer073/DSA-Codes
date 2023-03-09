#include<stdio.h>
int main()
{
	int a[100],n,i,j,pos;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position of the element you want to delete:\n");
	scanf("%d",&pos);
	
	for(j=pos-1;j<n;j++)
	{
		a[j]=a[j+1];
	}
	printf("Array after deletion is:\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n\n");
	printf("This program is made by Name- VEER PRATAP SINGH  ROll no.- 2100320120184.");
	return 0;
}
