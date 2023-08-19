//even integrs first then odd
#include <iostream>
using namespace std;
void sortarray(int *arr,int n)
{
    int lp=0;
    int rp=n-1;
    while(lp<rp)
    {
        if(arr[lp]%2!=0 && arr[rp]%2==0)
        {
            int temp=arr[lp];
            arr[lp]=arr[rp];
            arr[rp]=temp;
            lp++;
            rp--;
        }
        if(arr[lp]%2==0)
        {
            lp++;
        }
        if(arr[rp]%2!=0)
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
