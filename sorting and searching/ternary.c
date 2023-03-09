#include<stdio.h>
int ternary(int beg, int end, int key, int a[]){
	int mid1,mid2;
	 mid1=beg+(end-beg)/3;
	 mid2=mid1+(end-beg)/3;
	
	if (a[mid1]=key){
		return mid1;
	}
	if(a[mid2]=key){
		return mid2;
	}
	if(key<a[mid1]){
		end=mid1-1;
	}
	else if(key>a[mid2]){
		beg=beg+1;
	}
	else{
		beg=mid1+1;
		end=mid2-1;
	}
	return -1;
}
int main()
{
	int beg,end,key,n,a[100],i,val;
	printf("Enter the size of array;");
	scanf("%d",&n);
	printf("Enter the elements of array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	beg=0;
	end=n-1;
	printf("Enter the element to search:");
	scanf("%d",&key);
	val=ternary(beg, end, key, a);
	printf("The position of %d is %d",key,val);
	return 0;
}
