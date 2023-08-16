/* ******
   *    *
   *    *
   ****** */
  #include<iostream>
  using namespace std;
  int main()
  {
    int x,y;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>x>>y;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
            if(i==1||i==x||j==1||j==y)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
  }
