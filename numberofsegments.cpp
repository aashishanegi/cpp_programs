class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        bool flag = 0; 
        for(int i = 0;i<s.length();i++){
            if(s[i]==' '){
                if(flag == 1){
                    flag = 0;
                    count++;    
                }
            }
            else{
                flag = 1; 
            }
        }
        if(flag == 1){
            return count+1;
        }
        return count;
    }
};
