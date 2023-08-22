#include <iostream>
using namespace std;
int sum(int arr[], int l, int r)
{
    int sum=0,sum1=0;
    for(int i=0;i<=r;i++)
    {
        sum+=arr[i];
    }
    for(int i=0;i<=l-1;i++)
    {
        sum1+=arr[i];
    }
    cout<<sum-sum1;
}
int main()
{
    int arr[10];
    int n;
    int l,r;
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
    cout<<endl<<"Enter the start and stop limit: "<<endl;
    cin>>l>>r;
    cout<<endl<<"The sum is: ";
    sum(arr,l-1,r-1);
    return 0;  
}
