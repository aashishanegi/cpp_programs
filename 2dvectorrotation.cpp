//rotate a 2d vector by 90degree in clockwise direction without creating a new vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotatedvector(vector<vector<int>> &v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        reverse(v[i].begin(),v[i].end());
    }

return;
}
int main()
{
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    vector<vector<int>> vec (n,vector<int>(n));
    cout<<"Enter the elements in the vector: "<<endl;
    int ele;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>vec[i][j];
        }
    }
    rotatedvector(vec);
    cout<<endl<<"The new vector is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
