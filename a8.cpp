/*Write a function template named sort() that sorts the elements of an array in ascending order. The
function should accept an array and its size as parameters. In the main() function, input the elements of an
integer array and a float array, sort both arrays using the same template function, and display the sorted
arrays.*/
#include<iostream>
using namespace std;
// template function for sorting array
template <class T>

void sortArray(T arr[],int size)
{
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if (arr[j]>arr[j+1])
            {
                T temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
// function to display array
template <class T>
void display(T arr[], int size){
    for(int i=0;i<size;i++)
    {
        cout<< arr[i]<<"";
    }
    cout<< endl;
}
int main()
{
    int n1,n2;

    // integer array
    cout<<"Enter size of integer array:";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter integer elements:";
    for (int i=0;i<n1;i++)
    cin>>arr1[i];

    // float array
    cout<<"Enter size of float array:";
    cin>>n2;
    float arr2[n2];
    cout<<"Enter float elements:";
    for(int i=0;i<n2;i++)
    cin>>arr2[i];

    //Sorting
    sortArray(arr1,n1);
    sortArray(arr2,n2);

    //Display
    cout<<"\nSorted integer array:";
    display(arr1,n1);

    cout<<"\nSorted float array:";
    display(arr2,n2);

    return 0;
}
