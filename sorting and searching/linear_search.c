#include<stdio.h>
int main()
{
	int a[20],b[20],n,i,j,num;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements of array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search:\n");
	scanf("%d",&num);
	printf("The element is found at location:");
	for(i=0;i<n;i++){
		if(num==a[i]){
		//	printf("The element is found at location:%d\n",i+1);
		printf("%d\t",i+1);
	//	b[j]=i+1;
	//	j++;
				
		}
		
	}
/*	printf("The location of element is:");
	for(i=0;i<j;i++){
		printf("%d\t",b[i]);
	}*/
printf("\nThe program is run by Veer Pratap Singh(2100320120184)\n");
		return 0;
}
