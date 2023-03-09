#include<stdio.h>
void main()
{
	int m, n, i, j, a[20], b[20], c[20], k=0, flag=0;
	printf("Enter the number of elements of set A. ");
	scanf("%d", &m);
	printf("Enter %d elements. ", m);
	for(i=0;i<m;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the number of elements of set B. ");
	scanf("%d", &n);
	printf("Enter %d elements. ", n);
	for(j=0;j<n;j++)
	{
		scanf("%d", &b[j]);
	}
	for(i=0;i<m;i++)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
			flag=1;
			}
		}
		if(flag==0)
		{
			c[k]=a[i];
			k++;
		}
	}
	printf("\nElements of set A that does not belong to set B are\n");
	for(i=0;i<k;i++)
	{
		printf("%d ", c[i]);
	}
	printf("\n\nThis program is made by VEER PRATAP SINGH \nRoll no. 2100320120184");
}
