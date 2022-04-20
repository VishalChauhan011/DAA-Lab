#include<iostream>
using namespace std;

int binarySearch(int arr[],int left,int right, int key)
{
    int mid = left + (right-left)/2;

    if (arr[mid]==key)
    {
        return mid;
    }
    else if(key<arr[mid])
    {
        return binarySearch(arr,left,mid-1,key);
    }
    else if(key>arr[mid])
    {
        return binarySearch(arr,mid+1,right,key);
    }
    return -1;
}

int exponentialSearch(int arr[], int size,int key)
{
    if(arr[0]==key)
    return 0;
    
    int i=1;

    while(i<size&&arr[i]<=key)
     i=i*2;

     return binarySearch(arr,min(i/2,size-1),i,key);
}
int main()
{
    int size,key,index;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int *arr = new int[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to be searched: ";
    cin>>key;
    index=exponentialSearch(arr,size,key);
    if(index==-1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element found at index: "<<index;
    }
    return 0;
}
