//count all the digits in a number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int ld,count=0;
    while(num>0)
    {
        ld=num%10;
        count++;
        num=num/10;
    }
    cout<<"Number of digits is: "<<count<<endl;
    return 0;
}
