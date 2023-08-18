//sort an array of 0 and 1
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
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        count++;
    }
    cout<<endl<<"New array: "<<endl;
    /*for(int i=0;i<count;i++)
    {
        arr[i]=0;
    }
    for(int i=count;i<n;i++)
    {
        arr[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }*/
    for(int i=0;i<n;i++)
    {
        if(count>0)
        {
            arr[i]=0;
            count--;
        }
        else
        {
            arr[i]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
 
