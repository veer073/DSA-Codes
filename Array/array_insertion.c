#include<stdio.h>
int main()
{
    int a[100],n,i,j,k,position,val;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position to insert the element\n");
    scanf("%d",&position);
    printf("enter the value on that position\n");
    scanf("%d",&val);
    for(i=n-1;i>=position-1;i--){
        a[i+1]=a[i];
    }
    a[position-1]=val;
    printf("Final array is\n");
   for(i=0;i<=n;i++)
   {
       printf("%d\t",a[i]);
   }
   printf("\n");
   printf("This program is made by Name- VEER PRATAP SINGH  ROll no.- 2100320120184.");
   return 0;
}
