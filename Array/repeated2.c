#include<stdio.h>
int main()
{
    int a[10],r[10],u[10],n,i,j,flag=0,k=0,l=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        if (a[i]!=0)
        {
        for ( j = i+1; j < n; j++)
        {
         if(a[i]==a[j])
         {
            if (flag==0)
                r[k++]=a[i];

            a[j]=0;
            flag=1;
            
         }
        }
        if(flag==0)
        {
            u[l++]=a[i];
        }
    }
    }
    printf("\n\repeated elements are:\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",r[i]);
    }
    printf("\unrepeated elements are:\n");
    for(i=0;i<l;i++)
    {
        printf("%d ",u[i]);
    }
    printf("\n");
    printf("This program is made by Name-VEER PRATAP SINGH  Roll no.2100320120184.\n");    

return 0;
}
