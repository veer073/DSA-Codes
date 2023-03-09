#include<stdio.h>
int main()
{
	int a[100],r[100],u[100],i,j,p,n,k,flag=0,l;
	 printf("Enter the size of array\n");
    scanf("%d",&n);

    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    
    for(i=0;i<n;i++)
    {
    	flag=0;
    	if(a[i]!=0)
    	{
		
       for(j=i+1;j<n;j++)
	   {
	   	if(a[i]==a[j])
	   	{
	   		if(flag==0)
	   		{
	   			r[k]=a[i];
	   			k++;
			   }
			   a[j]=0;
			   flag=1;
		   }
		} 
	}
		if(flag==0)
		{
			u[l]=a[i];
		
			l++;
		}
			
    }
 
	  printf("The repeated elements are\n");
    for(i=0;i<k;i++)
    {
	
    	printf("%d\t",r[i]);
    }
    	printf("\n");
	  printf("The unrepeated elements are\n");
    for(i=0;i<l;i++)
    {
	
    	printf("%d\t",u[i]);
    }
    
	return 0;
}
