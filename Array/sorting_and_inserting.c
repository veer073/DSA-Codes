#include<stdio.h>
int main()
{
      int a[100],n,i,j,k,pos,val,temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++){
		
        if(a[i]>a[j]){
		
             temp = a[i];
            a[i]=a[j];
            a[j]= temp;
        
			}
		}
    }
     printf(" array in ascending order is\n");
    for(i=0;i<n;i++)
    {
   printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Enter the number you want to insert in the given array:\n");
    scanf("%d",&val);
    for(i=0;i<n;i++)
    {
    	if(val<a[i])
    	{
    		pos=i+1;
    		break;
		}
		else{
			pos=n+1;
		}
	}
		for(i=n;i>=pos;i--)
		{
			a[i]=a[i-1];
		}
		a[pos-1]=val;
			printf("After inserting the value array is:\n");
			for(i=0;i<=n;i++)
			{
				printf("%d\t",a[i]);
			}
			printf("\n");
			printf("This program is made by Name- VEER PRATAP SINGH  ROll no.- 2100320120184.");
    return 0;
}
