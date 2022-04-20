#include<iostream>
#include<math.h>
using namespace std;

int jumpSearch(int arr[],int size, int key)
{
    int m =sqrt(size);
    int step =0;
    int i;

    while(arr[step]<key)
    step=step+m;

    step=step-m;
    for ( i = step+1; i < step+m; i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
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

    index=jumpSearch(arr,size,key);
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