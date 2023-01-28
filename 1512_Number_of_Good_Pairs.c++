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
// I will go to the index of temp with nums value.
// Like temp[nums[i]] if nums i is 1 then temp 1.
// if nums i 2 then temp 2.
// then I will add 1 in temp[nums[i]] which will change 0 to 1;
// lets say if i set same value in nuns[i] then temp[nums[i]]
// will point me to same index which is temp[nums[i]].
// the value will be 1 or number of occourance then I will add +1 to it 
// 1 becames 2.
// Solved 2 more questions commiting tommarow.
