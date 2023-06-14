#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<< "Enter number 1 : " <<endl;
    cin>> a;
    cout<< "Enter number 2 : " <<endl;
    cin>> b;
     cout<< "Number 1 is : " <<a <<endl << "Number 2 is : " <<b <<endl;
    int c;
    c=a;
    a=b;
    b=c;
    cout<< "New value of number 1 is: " << a <<endl << "New value of number 2 is: " <<b <<endl;
    return 0;
}
