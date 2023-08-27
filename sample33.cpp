//reverse all the digits in a number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int ld,rev=0;
    while(num>0)
    {
        ld=num%10;
        rev=rev*10+ld;
        num=num/10;
    }
    cout<<"Reverse of number is: "<<rev<<endl;
    return 0;
}
