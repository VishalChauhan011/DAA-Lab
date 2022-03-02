#include <stdio.h>
#define MAX 100

int binarySearch(int key, int l, int r, int arr[])
{
    int mid = l + (r - l) / 2;

    if (key == arr[mid])
    {
        return mid;
    }
    else if (key < arr[mid])
    {
        return binarySearch(key, l, mid - 1, arr);
    }
    else if (key > arr[mid])
    {
        return binarySearch(key, mid + 1, r, arr);
    }

    return -1;
}

int main()
{
    int arr[MAX], n, index, l = 0, r, key;

    printf("\nEnter the size of an array : ");
    scanf("%d", &n);
    r = n - 1;

    printf("\nEnter elements in array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter key to search in array : ");
    scanf("%d", &key);

    index = binarySearch(key, l, r, arr);

    if (index == -1)
    {
        printf("\nKey not found.");
    }
    else
    {
        printf("\n Key is found on %d index. ", index);
    }
    return 0;
}