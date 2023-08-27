//find the row with maximum ones
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxones(vector<vector<int>> &V)
{
    int maxone=INT_MIN;
    int idx=-1;
    int column=V[0].size();
    int count;
    for(int i=0;i<V.size();i++)
    {
        for(int j=0;j<V[i].size();j++)
        {
            if(V[i][j]==1)
            {
                count=column-j;
            }
            if(count>maxone)
            {
                maxone=count;
                idx=i;
            }
        }
    }
    return idx;
}
int main()
{
    int n,m;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>n>>m;
    vector<vector<int>> vec (n,vector<int>(m));
    cout<<"Enter the elements in the vector: "<<endl;
    int ele;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>vec[i][j];
            /*cin>>ele;
            vec[i].push_back(ele);*/
        }
    }
    int res=maxones(vec);
    cout<<"The row with max ones: "<<res;
    return 0;
}
