//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  int checkPrime(int a){
        if(a == 1)
            return 0;
            
        for(int i = 2; i<= sqrt(a); i++){
            if(a%i == 0)
                return 0;
        }
        return a;
    }
  public:
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int> ans;
        for(int i = M; i<=N; i++){
            if(checkPrime(i))
                ans.push_back(i);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends
