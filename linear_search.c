#include <stdio.h>
#define MAX 100

int linearSearch(int key, int l, int n, int arr[])
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (key == arr[i])
            return i;
    }
    return -1;
}

int main()
{
    int n, index = 0, l = 0, key, arr[MAX];

    printf("\nEnter the size of an array : ");
    scanf("%d", &n);

    printf("\nEnter elements in array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter key to search in array : ");
    scanf("%d", &key);

    index = linearSearch(key, l, n, arr);

    if (index == -1)
    {
        printf("\nKey not found.");
    }
    else
    {
        printf("\nKey is found on %d index. ", index);
    }

    return 0;
}