#include<stdio.h>
void main()
{
    int a[50],n,i,j,k;
    printf("Enter the size of array\n");
    scanf("%d",&n);

    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    
    printf("The elements of the array entered are as follow\n");
    for(i=0;i<n;i++)
    {
        printf("%d   ",a[i]);
    }
    printf("\n");
    printf("This program is made by Name- VEER PRATAP SINGH  ROll no.- 2100320120184.");

}
