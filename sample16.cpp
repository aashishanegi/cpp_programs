#include <iostream>
#include <vector>
using namespace std;
int main()
{ vector<int> v(6);
cout<<"Enter elements: "<<endl;
for(int i=0;i<6;i++)
    {
        cin>>v[i];
    }
    cout<<"Enter x"<<endl;
    int x;
    cin>>x;
    
    int occ=-1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
            occ=i;
        }
    }
    cout<<"AT: "<<occ<<endl;
    return 0;
}
