#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: " <<endl;
    cin>>num;
    int i=2;
    int count=0;
    for( ;i<=num/2;i++)
    {
       if(num%i==0)
       { 
          count++;
       }
    }
    if (count==0)
    {
        cout<<"It is a Prime Number";

    }
    else
    {
        cout<< "It is not a Prime Number";
    }
    return 0;
}
