class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longest = 0;
        int x,c;
        unordered_set <int> st;
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        for(auto it : st)
        {
            if(st.find(it - 1) == st.end())
            {
                c = 1;
                x = it;
            }
            while(st.find(x+1) != st.end())
            {
                c++;
                x++;
            }
            longest = max(longest,c);
        }
        return longest;
    }
};
