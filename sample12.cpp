#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the limit: "<<endl;
    cin>>n;
   int i=1;
    int sum=0;
    //while loop
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"The sum is: "<<sum<<endl;
    //for loop
    int s=0;
    for(int j=1;j<=n;j++)
    {
       s=s+j;
    }
    cout<<"The sum is: "<<s<<endl;
    return 0;
}
