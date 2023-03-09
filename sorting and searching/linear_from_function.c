#include<stdio.h>
void linear_search(int a[10], int n, int num)
{
	int i;
	
	for(i=0;i<n;i++){
		if(num==a[i]){
		//	printf("The element is found at location:%d\n",i+1);
		printf("%d\t",i+1);
	}
	}
		
}
int main(){
	int n,i,num,a[20];
	printf("size");
	scanf("%d",&n);
	printf("elements");
	for(i=0;i<n;i++){
	
	scanf("%d",&a[i]);
	}
		printf("Enter the element you want to search:");
		scanf("%d",&num);


	linear_search(a,n,num);
	return 0;
}


