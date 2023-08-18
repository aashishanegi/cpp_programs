//array rotation
//find unique element in array with duplicate values
#include <iostream>
using namespace std;
int main()
{
    int value;
    int arr[10];
    int n;
    int k;
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
    cout<<endl<<"Enter rotation numebr: "<<endl;
    cin>>k;
    cout<<"The rotated array is: "<<endl;
    k=k%n;
    if(k==0)
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    else
    {
    int ansarr[10];
    int j=0;
    for(int i= n-k;i<n;i++)
    {
        ansarr[j++]=arr[i];
    }
    for(int i=0;i<=k;i++)
    {
        ansarr[j++]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<ansarr[i]<<" ";
    }
    }
    return 0;
}
