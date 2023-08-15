#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //for loop in vectors
    vector <int> v;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<5;i++)
    {
        int e;
        cin>>e;
        v.push_back(e);
    }
    cout<<"The vector is: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // for each element
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}
