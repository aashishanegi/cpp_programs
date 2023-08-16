/* *****
   *****
   ***** */
#include <iostream>
using namespace std;
int main()
{
   int x,y;
   cout<<"Enter num of rows and columns: "<<endl;
   cin>>x>>y;
   for(int i=1;i<=x;i++)
   {
    for(int j=1;j<=y;j++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
   return 0;
}
