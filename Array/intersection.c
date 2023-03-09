#include<stdio.h>
int main()
{
    int a[50],b[50],c[50],i,j,k=0,na,nb;
    printf("Enter the number of elements of set A:\n");
    scanf("%d",&na);
    printf("Enter the elements of  set A:\n");
    for(i=0;i<na;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of elements of set B:\n");
    scanf("%d",&nb);
    printf("Enter the elements of set B:");
    for(i=0;i<nb;i++)  {
    	scanf("%d",&b[i]);
	}
	for(i=0;i<na;i++){
		for(j=0;j<nb;j++){
			if(a[i]==b[j]){
				c[k]=a[i];
				k++;
				break;
			}	
		}	
	}
	printf("Intersection of the set is:\n");
	for(i=0;i<k;i++){
		printf("%d\t",c[i]);
	}
	printf("\n\nThis program is made by VEER PRATAP SINGH \nRoll no. 2100320120184");
	return 0;
}


