//traverse a matrix in spiral form
#include <iostream>
#include <vector>
using namespace std;
void spiral(vector<vector<int>>&v)
{
    int left=0;
    int right=v[0].size()-1;
    int top=0;
    int bottom=v.size()-1;
    int direction=0;
    while(left<=right && top<=bottom)
    {
        if(direction==0)
        {
            //left to right
            for(int i=0;i<=right;i++)
            {
                cout<<v[top][i]<<" ";
            }
            top++;
        }
        if(direction==1)
        {
            //top to bottom
            for(int i=top;i<=bottom;i++)
            {
                cout<<v[i][right]<<" ";
            }
            right--;
        }
        if(direction==2)
        {
            //right to left
            for(int i=right;i>=left;i--)
            {
                cout<<v[bottom][i]<<" ";
            }
            bottom--;
        }
        if(direction==3)
        {
            //bottom to top
            for(int i=bottom;i>=right;i--)
            {
                cout<<v[i][left]<<" ";
            }
            left++;
        }
        direction=(direction+1)%4;
    }
    return;
}
int main()
{
    int n,m;
    cout<<"Enter the value of number of rows and columns: "<<endl;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    cout<<"Enter the elements in the vector: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"The vector is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The new vector is: "<<endl;
    spiral(matrix);
    return 0;
}
