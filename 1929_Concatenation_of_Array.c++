class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        if(nums.size() == 0) return nums;
        int n = nums.size();
        vector<int> temp(2*n, 0);
        for(int i=0; i<n; i++){
            temp[i] = nums[i];
            temp[i+n] = nums[i];
        }
        return temp;
    }
};