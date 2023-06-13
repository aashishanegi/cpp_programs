#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter a number" <<endl;
    cin>>num;
    if((num%2==0) && (num%3==0))
    {
        cout<<num <<" is a multiple of 2 and 3.";
    }
    else
    {
        cout<<num <<" is not a multiple of 2 and 3.";
    }
    return 0;
}
