//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        if (n==0) return 0;
        if(n==1) return 1;
        int first = 1;
        int second = 1;
        int mod =1000000007;
        for(int i =3;i<=n;i++)
        {
            int r =(first + second) % mod;
            first = second;
            second = r;
        }
        return second;
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
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
