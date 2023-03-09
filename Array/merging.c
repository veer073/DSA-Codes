#include<stdio.h>
int main()
{
	int n,i=0,j=0,a[100],b[100],temp,na,nb,c[100],k,m;
		printf("Enter the size of array A:\n");
	scanf("%d",&na);
	
	printf("Enter the elements of array A in increasing order:\n");
	for(i=0;i<na;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("Enter the size of array B:\n");
	scanf("%d",&nb);
	
	printf("Enter the elements of array B in increasing order:\n");
	for(j=0;i=j<nb;j++)
	{
		scanf("%d",&b[j]);
	}
	i=j=0;
	while(i<na && j<nb)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	if(i>=na){
		while(j<nb)
		{
			c[k]=b[j];
			j++;
			k++;
			
		}
		if(j>=nb){
			while(i<na){
				c[k]=a[i];
				i++;
				k++;
				
			}
		}
	}
	printf("The merged array is:\n");
	for(i=0;i<na+nb;i++)
	{
		printf("%d\t",c[i]);
	}
	printf("\n");
 printf("This program is made by Name- VEER PRATAP SINGH ROll no.- 2100320120184.");
	return 0;
}
