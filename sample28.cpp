#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements in the array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"The new array is: "<<endl;
    int k = 0;
    int temp;
    for(int i=0;i<n;i++)
    {
        temp=arr[i]; 
        k=k+temp;
        arr[i]=k;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
    
