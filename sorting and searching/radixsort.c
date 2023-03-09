#include <stdio.h>
int findMax(int arr[], int n) {
    int max = arr[0],i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
void countingSort(int arr[], int n, int exp) {
    int output[n],i;
    int count[10] = {0};
    for (i = 0; i < n; i++) 
        count[(arr[i] / exp) % 10]++;
    
    for (i = 1; i < 10; i++) 
        count[i] += count[i-1];
    for (i = n-1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}
void radixSort(int arr[], int n) {
    int m = findMax(arr, n),i,exp;

    for (exp = 1; m / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}
int main() {
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    radixSort(arr, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
printf("\nThe program is run by Veer Pratap Singh(2100320120184)\n");
    return 0;
}

