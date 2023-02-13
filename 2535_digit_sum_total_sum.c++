class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
      int cs = 0;
      int ds = 0;
      int ns = 0;
      for(int i =0; i<nums.size(); i++){
          cs += nums[i];
      }

      for(int i =0; i<nums.size(); i++){
          while(nums[i]>=9){
              ds += nums[i]%10;
              nums[i] = nums[i]/10;
          }
          if(nums[i]<=9){
              ds += nums[i];
          }
      }
      return abs(cs - ds);
    }
};