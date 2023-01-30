class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
       vector<int>ans;
       for(int i = 1; i<nums.size(); i+=2){
           ans.insert(ans.end(), nums[i-1], nums[i]);
       }
       return ans;
    }
};