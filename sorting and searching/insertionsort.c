 #include <stdio.h>  
  
void insert(int a[], int n)  
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j]) 
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
  
void printArr(int a[], int n)   
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
  
int main()  
{  
    int a[10],n,i; 
    printf("Enter the size of array:");
 	scanf("%d",&n);
 	printf("Enter the Elements of array:");
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 } 
    printf("Before sorting array elements are :");  
    printArr(a, n);  
    insert(a, n);  
    printf("\nAfter sorting array elements are :");    
    printArr(a, n);  
  printf("\nThe program is run by Veer Pratap Singh(2100320120184)\n");
    return 0;  
} 
