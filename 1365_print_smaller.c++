class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
     vector<int> ans(101, 0);
     for(int i = 0; i<nums.size(); i++){
         ans[nums[i]]++;
     }
     for(int i = 1; i<ans.size(); i++){
         ans[i] += ans[i-1];
     }
    vector<int> ans2(nums.size(), 0);
    for(int i = 0; i<ans2.size(); i++){
        if(nums[i] == 0){
            ans2.push_back(0);
        }
        else{
            ans2[i] = ans[nums[i]-1];
        }
    }
    return ans2;
    }
};