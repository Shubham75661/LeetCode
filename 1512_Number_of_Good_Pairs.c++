class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int>temp(101, 0);
        int a = 0;
        for(int i = 0; i<nums.size(); i++){
            a += temp[nums[i]];
            temp[nums[i]]++;
        }
        return a;
    }
};

// I am creating a temp of value 0 and size 101
// 101 is max nums[i] value.
// then I will itrate through all of the values in nums.
