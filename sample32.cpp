//count all the digits in a number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int ld,sum=0;
    while(num>0)
    {
        ld=num%10;
        sum+=ld;
        num=num/10;
    }
    cout<<"Sum of digits is: "<<sum<<endl;
    return 0;
}
