

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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
               if(arr[i]==arr[j])
                {
                  arr[i]=arr[j]=-1;
                }
            }
        }
    cout<<endl<<"Unique elements are: "<<endl;
    for(int i=0;i<n;i++)
    {   
        if(arr[i]!=-1)
        cout<<arr[i]<<" ";
    }
    return 0;
}
