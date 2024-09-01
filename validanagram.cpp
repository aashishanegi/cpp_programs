class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector <int> vec (26,0);
        for(auto x : s)
        {
            vec[x-'a']++;
        }
        for(auto y : t)
        {
            vec[y-'a']--;
            if(vec[y-'a'] < 0) return false;
        }
        return true;
    }
};
