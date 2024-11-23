class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m=box.size(),n=box[0].size();
        vector<vector<char>>ans(n,vector<char>(m));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[j][i]=box[i][j];
            }
        }
        for(auto &row:ans){
            reverse(row.begin(),row.end());
        }
        int unique=0;
        unordered_map<int,pair<int,pair<int,int>>>mp;
        for(int j=0;j<m;j++){
            int c=0;
            for(int i=0;i<n;i++){
                if(ans[i][j]=='.') continue;
                else if(ans[i][j]=='#') c++;
                else{
                    mp[unique]={c,{i,j}};
                    unique++;
                    c=0;
                }
            }
            if(c!=0){
                mp[unique]={c,{n,j}};
                unique++;
            }
        }
        for(auto it:mp){
            auto p=it.second;
            int c=p.first,i=p.second.first,col=p.second.second;
            for(int row=i-1;row>=0;row--){
                if(c){
                    ans[row][col]='#';
                    c--;
                }
                else{
                    if(ans[row][col]=='*'){
                        break;
                    }
                    ans[row][col]='.';
                }
            }
        }
        return ans;
    }
};
