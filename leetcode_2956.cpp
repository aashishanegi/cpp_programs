class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector <int> ans;
        int count1 = 0, count2 =0;
        for (int i = 0;i <n;i++)
        {
            for(int j = 0; j<m;j++)
            {
                if(nums1[i] == nums2[j])
                {
                    count1++;
                    break;
                }
            }
        }
        ans.push_back(count1);
         for (int i = 0;i <m;i++)
        {
            for(int j = 0; j<n;j++)
            {
                if(nums2[i] == nums1[j])
                {
                    count2++;
                    break;
                }
            }
        }
        ans.push_back(count2);
        return ans;
    }
};
