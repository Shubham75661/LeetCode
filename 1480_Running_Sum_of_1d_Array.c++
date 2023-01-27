class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      vector<int>ans(nums.size(), 0);
      int a = 0;
      int b = 0;
      while(a != nums.size()){
          b = b + nums[a];
          ans[a] =b;
          a++;
        }
        return ans;
    }
};