 #include<stdio.h>
 void bubblesort(int a[], int n)
 {
 	int i,j,temp;
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n-1-i;j++){
 			if(a[j]>a[j+1]){
 				temp=a[j];
 				a[j]=a[j+1];
 				a[j+1]=temp;
 				}
		 }
	 }
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
	 bubblesort(a,n);
	 for(i=0;i<n;i++){
	 	printf("%d  ",a[i]);
	 }
	  printf("\nThe program is run by Veer Pratap Singh(2100320120184)\n");
	 return 0;
 }
