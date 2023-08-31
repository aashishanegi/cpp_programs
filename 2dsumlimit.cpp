#include <iostream>
using namespace std;
int main()
{
    int n,m,r1,c1,r2,c2,sum=0;
    int arr[30][30];
    cout<<"Enter the dimension of rows and columns: "<<endl;
    cin>>n>>m;
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The array: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl<<"Enter the limits: "<<endl;
    cin>>r1>>c1>>r2>>c2;
    for(int i=r1;i<=r2;i++)
    {
        for(int j=c1;j<=c2;j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<"The sum is: "<<sum;
}
