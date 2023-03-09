#include<stdio.h>
void main()
{
	 int a[50],b[50],c[50],i,j,k=0,f,na,nb,nc;
    printf("Enter the number of elements of Array A:\n");
    scanf("%d",&na);
    printf("Enter the elements of Array A:\n");
    for(i=0;i<na;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of elements of  Array B:\n");
    scanf("%d",&nb);
    printf("Enter the elements of Array B:");
    for(i=0;i<nb;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<na;i++){
    	c[k]=a[i];
    	k++;
	}
	for(i=0;i<nb;i++){
		f=0;
		for(j=0;j<na;j++){
			if(b[i]==c[j])	{
				f=1;
				break;
			}	
		}
		if(f==0){
			c[k]=b[i];
			k++;
			}
	}
	printf("The Union is:\n");
    for(i=0;i<k;i++){
   	printf("%d\t",c[i]);
   }
   	printf("\n");
	printf("This program is made by Name- VEER PRATAP SINGH ROll no.- 2100320120184.");
}
