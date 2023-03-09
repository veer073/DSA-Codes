#include<stdio.h>
int main()
{
	printf("This program is made by:Veer Pratap Singh(2100320120184)\n");
	int n,i,j,a[100],temp;
		printf("Enter the size of array:");
	scanf("%d",&n);
	
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array in reverse is:");
	for(i=0;i<(n/2);i++){
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
