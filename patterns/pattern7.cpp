/*    1
     121
    12321
   1234321 */
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the limit: "<<endl;
    cin>>x;
    for(int i=1;i<=x;i++)
   {
    for(int k=0;k<x-i;k++)
        cout<<" ";
    for(int j=1;j<=i;j++)
        cout<<j;
    for(int j=i-1;j>=1;j--)
        cout<<j;
    cout<<endl;
   }
   return 0;
}
