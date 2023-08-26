#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the limit: "<<endl;
    cin>>n;
    cout<<"The factorial is: "<<endl;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
        cout<<fact<<" ";
    }
    cout<<endl;
    return 0;
}
