#include <stdio.h>

int binarySearch(int arr[], int lo, int hi, int item)
{
    int mid;

    if (lo > hi)
        return -1;

    mid = (lo + hi) / 2;

    if (arr[mid] == item)
        return mid;
    else if (arr[mid] > item)
        binarySearch(arr, lo, mid - 1, item);
    else if (arr[mid] < item)
        binarySearch(arr, mid + 1, hi, item);
}

int main()
{
	printf("This program is made by:Veer Pratap Singh(2100320120184)\n");
    int i,arr[10],n;
    int index = 0;
    int item = 0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    printf("Enter item to search: ");
    scanf("%d", &item);

    index = binarySearch(arr, 0, n, item);
    if (index == -1)
        printf("Item not found in array\n");
    else
        printf("Item found at index %d\n", index);

    return 0;
}
