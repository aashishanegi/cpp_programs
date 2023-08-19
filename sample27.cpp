//sorted square array using absolute values
#include <iostream>
#include <vector>
using namespace std;
void sortedarray(vector <int> &v)
{
    vector <int> ans;
    int lp=0;
    int rp=v.size()-1;
    while(lp<=rp)
    if(abs(v[lp])<abs(v[rp]))
    {
        ans.push_back(v[rp]*v[rp]);
        rp--;
    }
    else
    {
        ans.push_back(v[lp]*v[lp]);
        lp++;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of the vector: "<<endl;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortedarray(v);
    return 0;
}
