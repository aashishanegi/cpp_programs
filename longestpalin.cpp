class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> v(100,0);
        int even = 0; int odd = 0;int om = 0;
        const int m=s.size();
        for(int i=0;i<m;++i){++v[s[i]-'A'];if(v[s[i]-'A']%2==1){++odd;}else{--odd;}}
        if(odd>1){return m-odd+1;}
        return m;
    }
};
