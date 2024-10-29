class Solution {
public:
    string convertToBase7(int num) {
        string ans="";
        int c=0;
        if(num<0){
            num=num*-1;
            c=1;
        }
        while(true){
            if(num>=7){
            int t=num%7;
            num=num/7;
            ans=to_string(t)+ans;
            }

            if(num<7){
                ans=to_string(num)+ans;
                break;
            }
        }
        if(c==1){
            ans="-"+ans;
        }
        return ans;
    }
};
