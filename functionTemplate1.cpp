// Write a function template to implement the Bubble Sort algorithm. Demonstrate the sorting of an integer array and a float array in ascending order.
#include<iostream>
using namespace std;
template <class T>
void bubbleSort(T arr[],int size){
    for (int i=0;i<size-1;i++)
    {
        for (int j=0;j<size-i-1;j++)
        {
if(arr[j]>arr[j+1])
{
    T temp;
    temp=arr[j];arr[j]=arr[j+1];
    arr[j+1]=temp;
}
        }
    }
}
template <class T>
void display(T arr[],int size)
{
    for(int i=0;i<size;i++)
   cout<<arr[i]<<"  ";
    }
    int main()
    {
        int n;
        cout<<"Enter size:";
        cin>> n;
        int arr[n];
        cout<<"Enter elements:";
        for(int i=0;i<n;i++)
        cin>> arr[i];
    bubbleSort(arr,n);
    cout<<"Sorted Array:";
    display(arr,n);
    return 0;
    }