#include<bits/stdc++.h>
using namespace std;
void printArray(int size,int *arr)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int size,int *arr)
{
    for(int i = 0; i<size-1; i++)
    {
        int index = i;
        for(int j = i+1; j<size; j++)
        {
            if(arr[index]>arr[j])
            {
                index = j;
            }
        }
        if(index != i)
        {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
}
int main()
{
    int size;
    cin>>size;
    int *arr = new int[size] {0};
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    //before sort part
    cout<<"Before sort : ";
    printArray(size,arr);

    //selection sort implementation
    selectionSort(size,arr);

    //after sort part
    cout<<"After sort  : ";
    printArray(size,arr);

    return 0;
}
