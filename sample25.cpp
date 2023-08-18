//swapping 0 and 1
#include <iostream>
using namespace std;
void sortarray(int *arr,int n)
{
    int lp=0;
    int rp=n-1;
    while(lp<rp)
    {
        if(arr[lp]==1&&arr[rp]==0)
        {
            arr[lp]=0;
            arr[rp]=1;
            lp++;
            rp--;
        }
        if(arr[lp]==0)
        {
            lp++;
        }
        if(arr[rp]==1)
        {
            rp--;
        }
    }
    return;
}
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
    cout<<endl<<"The sorted array is: "<<endl;
    sortarray(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
