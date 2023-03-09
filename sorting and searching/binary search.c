#include<stdio.h>
int binarysearch(int a[], int end, int start, int element){
	int mid;
	if(start>end){
		return -1;
	}
	mid= (start+end)/2;
	if(a[mid]==element){
		return mid;
	}
	else if(a[mid]>element){
		binarysearch(a, mid-1, start, element);
	}
	else if(a[mid]<element){
		binarysearch(a,end,mid+1,element);
	}
	
}
int main(){
	int i,j,k=0,a[20],val,n,pos=0;
	printf("Enter the size of the Array:");
	scanf("%d",&n);
	printf("Enter the elements of Array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to search:");
	scanf("%d",&val);
	pos= binarysearch(a,n-1,0,val);
	if(pos==-1){
		printf("ITEM NOT FOUND!");
	}
	else{
		printf("element found at position:%d",pos+1);
	}
printf("\nThe program is run by Veer Pratap Singh(2100320120184)\n");
	
}

