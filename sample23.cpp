//rotation using vectors
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int k=2;
    k=k%v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    cout<<"The rotated array is: "<<endl;
    for(int e:v)
    {
        cout<<e<<" ";
    }
   return 0;
}
