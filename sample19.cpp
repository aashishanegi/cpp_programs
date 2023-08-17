//number of triplets equals a target sum
#include <iostream>
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
    cout<<endl<<"Enter the sum value: "<<endl;
    cin>>value;
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
               sum=arr[i]+arr[j]+arr[k];
               if(sum==value)
                {
                  count++;
                }
            }
        }
    }
    cout<<"Number of times: "<<count;
    return 0;
}
