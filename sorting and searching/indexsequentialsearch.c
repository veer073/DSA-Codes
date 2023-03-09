#include<stdio.h>
#include<stdlib.h>
void indexedSequentialSearch(int arr[], int n, int k)
{
 int elements[20], indices[20], temp, i;
 int j = 0, ind = 0, start, end;
 for (i = 0; i < n; i += 3) 
 {
 	elements[ind] = arr[i];
 	indices[ind] = i;
 	ind++;
 }
 if (k < elements[0]) 
 {
 	printf("Not found");
 	exit(0); 
 }
 else
  {
	 for (i = 1; i <= ind; i++) {
	
	 if (k <= elements[i])
	  {
	 start = indices[i - 1];
	 end = indices[i];
	 break;
 	}
   }
}
 for (i = start; i <= end; i++) {
	 if (k == arr[i]) {
	 j = 1;
	 break;
  }
 }
 if (j == 1)
 printf("Found at index %d", i+1);

 else
 printf("Not found");
  
}
int main()
{ 
	int n,i,j,val,a[50],b[50],k=0;
	 printf("Enter the size of array:\n");
	 scanf("%d",&n);
	 printf("Enter the elements of array:\n");
	 for(i=0;i<n;i++)
	 {
		 scanf("%d",&a[i]);
	 }
	 printf("Enter the number you want to search :\n");
	 scanf("%d",&val);
	 int p = sizeof(a) / sizeof(a[0]);
	 indexedSequentialSearch(a, p, val);
	 printf("\n");
	 printf("\n\nThis program is made by-Name-VEER PRATAP SINGH; Roll no.-2100320120184\n");
	 return 0;
	 
	 }
