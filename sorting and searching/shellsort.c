#include <stdio.h>
void shellSort(int arr[], int n) {
    int gap, i, j, temp;
    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            for (j = i-gap; j >= 0 && arr[j] > arr[j+gap]; j -= gap) {
                temp = arr[j];
                arr[j] = arr[j+gap];
                arr[j+gap] = temp;
            }
        }
    }
}
int main() {
    printf("This program is made by:Veer Pratap Singh(2100320120184)\n");
 	int a[10],m,i;
 
 	printf("Enter the size of array:");
 	scanf("%d",&m);
 	printf("Enter the Elements of array:");
 	for(i=0;i<m;i++){
 		scanf("%d",&a[i]);
	 }
    
    shellSort(a, m);
    printf("Sorted array: ");
    for (i = 0; i < m; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

