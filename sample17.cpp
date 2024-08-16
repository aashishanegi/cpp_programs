// question 17

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
    
    int occ=0;
    for(int ele:v)
    {
        if(ele==x)
        {
            occ++;
        }
    }
    cout<<"Number of times: "<<occ<<endl;
    return 0;
}
