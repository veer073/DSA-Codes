  #include<stdio.h>
 void selectionsort(int a[], int n)
 {
 	int i,j,temp,min;
 	for(i=0;i<n-1;i++)
 	{
 		min=i;
 		for(j=i+1;j<n;j++){
 			
 			if(a[j]<a[min]){
 				min=j;
			 }
 			if(min!=i){
 				temp=a[min];
 				a[min]=a[j];
 				a[j]=temp;
 				}
		 }
	 }
	 for(i=0;i<n;i++)
	 	printf("%d ",a[i]);
 }
 
 int main(){
 	int a[10],n,i;
 	printf("Enter the size of array:");
 	scanf("%d",&n);
 	printf("Enter the Elements of array:");
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	 printf("The sorted array is:");
	 selectionsort(a,n);
	printf("\nThe program is run by Veer Pratap Singh(2100320120184)\n");
	 return 0;
 }
