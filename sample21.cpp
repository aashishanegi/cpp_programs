//second largest element
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int value;
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
    cout<<endl;
    int max=INT_MIN;
    int index;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        index=i;
    }
    arr[index]=-1;
    int x=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        x=arr[i];
    }
    cout<<"Second largest element: "<<x;
    return 0;
}
