class Solution {
public:
    char findTheDifference(string s, string t) {
        char c;
        int arr[26]={0};

        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
        }

        for(int i=0;i<t.length();i++){
            if(arr[t[i]-'a']>0){
                arr[t[i]-'a']--;
            }
            else if(arr[t[i]-'a']==0){
                c=t[i];
            }
        }
        return c;
    }
};
