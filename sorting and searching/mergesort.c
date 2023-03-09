#include <stdio.h>

void merge(int arr[], int left[], int right[], int left_size, int right_size) {
    int i = 0, j = 0, k = 0;
    
    while (i < left_size && j < right_size) {
        if (left[i] < right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }
    
    while (i < left_size) {
        arr[k++] = left[i++];
    }
    
    while (j < right_size) {
        arr[k++] = right[j++];
    }
}

void merge_sort(int arr[], int size) {
	int i,j;
    if (size < 2) {
        return;
    }
    
    int mid = size / 2;
    int left[mid], right[size - mid];
    
    for (i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    
    for (i = mid; i < size; i++) {
        right[i - mid] = arr[i];
    }
    
    merge_sort(left, mid);
    merge_sort(right, size - mid);
    merge(arr, left, right, mid, size - mid);
}

int main() {
    int i,n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    merge_sort(arr, n);
    
    printf("Sorted array: ");
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nThe program is run by Veer Pratap Singh(2100320120184)\n");
    return 0;
}

