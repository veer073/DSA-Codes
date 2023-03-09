#include <stdio.h>
void heapify(int arr[], int n, int i) {
    int largest = i; 
    int l = 2 * i + 1; // left child = 2*i + 1
    int r = 2 * i + 2; // right child = 2*i + 2
    if (l < n &&arr[l] >arr[largest])
        largest = l;
    if (r < n &&arr[r] >arr[largest])
        largest = r;
    if (largest != i) {
        int temp = arr[i];
arr[i] = arr[largest];
arr[largest] = temp;
heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n) {
	int i;
    // Build heap (rearrange array)
    for (i = n / 2 - 1; i>= 0; i--)
heapify(arr, n, i);
    for (i = n - 1; i>= 0; i--) {
        int temp = arr[0];
arr[0] = arr[i];
arr[i] = temp;
heapify(arr, i, 0);
    }
}
int main() {
    int n, i;
printf("Enter the number of elements: ");
scanf("%d", &n);

    int arr[n];
printf("Enter the elements: ");
    for (i = 0; i< n; i++) {
scanf("%d", &arr[i]);
    }
 printf("Elements are: ");
    for (i = 0; i< n; i++) {
printf("%d\t",arr[i]);
    }
    printf("\n");
heapSort(arr, n);

printf("Sorted element of an array: ");
    for (i = 0; i< n; i++) {
printf("%d ", arr[i]);
    }
      printf("\nThe program is run by Veer Pratap Singh(2100320120184)\n");
    return 0;
}

