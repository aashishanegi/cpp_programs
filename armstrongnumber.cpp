//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        int temp = n;
        int count=0;
        do
        {
            temp=temp/10;
            count++;
        } while(temp!=0);
        
        int copy = n;
        int sum = 0;
        do
        {
            int last = copy%10;
            sum=sum+pow(last,count);
            copy=copy/10;
        } while(copy!=0);
        
        if(sum != n) return "false";
        
        return "true";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
