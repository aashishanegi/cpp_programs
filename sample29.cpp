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
    cout<<endl<<"Position is: "<<endl;
    int total_sum=0;
    for(int i=0;i<n;i++)
    {
        total_sum+=arr[i];
    }
    int prefix_sum=0;
    int suffix_sum=0;
    int temp;
    for(int i=0;i<n;i++)
    {
        temp=arr[i]; 
        prefix_sum+=temp;
        arr[i]=prefix_sum;
        suffix_sum=total_sum-prefix_sum;
    if(suffix_sum==prefix_sum)
    {
        cout<<i;
    }   
    }    
    return 0;
}

## this is a cpp code
