#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    // takes array element input
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    // prints the array elements
    cout<<"The array is: "<<endl;
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
    //sort the array
     for(int i=0;i<size;i++)
    { 
        for(int j=i+1;j<size;j++)
    {
        if(arr[i]>arr[j])
        {
             int temp = arr[i];
             arr[i] = arr[j];
             arr[j] = temp;
        }
    }
    }
    cout<<"The sum is: "<<arr[0]+arr[size-1];
    return 0;
}
