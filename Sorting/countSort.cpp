#include <iostream>
using namespace std;

int findmax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void countSort(int arr[], int size)
{
    int max, i, j;

    max = findmax(arr, size);

    int *count = new int[max];

    for (i = 0; i < max; i++)
    {
        count[i] = 0;
    }

    for (i = 0; i < size; i++)
    {
        count[arr[i]-1]++;
    }

    i = 0, j = 0;

    while (i < max)
    {
        if (count[i] != 0)
        {
            arr[j++] = i+1;
            count[i]--;
        }
        else
            i++;
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    countSort(arr, size);
    cout << "Sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}