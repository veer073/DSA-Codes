#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void max_heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[largest] < arr[left])
        largest = left;

    if (right < n && arr[largest] < arr[right])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        max_heapify(arr, n, largest);
    }
}

void build_max_heap(int arr[], int n) {
    int last_non_leaf_node = (n / 2) - 1,i;

    for (i = last_non_leaf_node; i >= 0; i--)
        max_heapify(arr, n, i);
}

int main() {
    int n,i;
     int arr[6] = { 12, 11, 13, 5, 6, 7 };
     n = sizeof(arr) / sizeof(arr[0]);
    for(i=0;i<n;i++)
    	{
		scanf("%d",arr[i]);
		}

    printf("Array before building a max heap: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    build_max_heap(arr, n);

    printf("Array after building a max heap: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
	printf("The program is run by:Veer Pratap Singh(2100320120184)\n");
    return 0;
}

