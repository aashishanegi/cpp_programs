class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        if(nums.size() == 0)
        {
            return {}; 
        }
        
        vector<string> ans; 
        int n = nums.size(); 
        int start = nums[0], end = nums[0], cnt = nums[0];
        for(int i = 1; i < n; i++)
        {
            if(cnt + 1 == nums[i])
            {
                end++; 
                cnt++; 
            }
            else
            {
                string str = "";
                if(start != end)
                {
                    str += to_string(start) + "->" + to_string(end); 
                    ans.push_back(str);
                }
                else
                {
                    str = to_string(start); 
                    ans.push_back(str);
                }
                start = nums[i];
                end = nums[i];
                cnt = nums[i];
            }
        }
        
        string str = ""; 
        if(start != end)
        {
            str += to_string(start) + "->" + to_string(end); 
            ans.push_back(str); 
        }
        else
        {
            str = to_string(start);
            ans.push_back(str); 
        }
        
        return ans; 
    }
};
