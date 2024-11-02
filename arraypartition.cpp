class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
    //           i
    // 1 2 2 5 6 6
    sort(nums.begin(),nums.end());
    int sum=0;
    int n= nums.size()-1;
    for( int i=n;i>=1;i-=2){
      sum+= min(nums[i],nums[i-1]);  
    }
    return sum;
    }
};
