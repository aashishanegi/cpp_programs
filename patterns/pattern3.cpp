/*   *
    ***
   *****
  ******* */
 #include <iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j = 0; j < n - i; j++)
        cout<<" ";
        for(int j = 1; j <=2*i-1 ; j=j+2)
        cout<<"*";
        for(int j = 2; j <=i ; j++)
        cout<<"*";
        cout<<endl;
    }
    return 0;
 }
