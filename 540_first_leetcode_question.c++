class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1){
           return nums[0];
        }
        int x = 0;
        int y = 1;
        for(int i= y; i<nums.size(); i++){
            if(nums[x] != nums[y]){
                return nums[x];
            }
            x+=2;
            y+=2;
        }
        return -1;
    }
};