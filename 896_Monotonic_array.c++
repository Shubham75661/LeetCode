class Solution {
public:
    bool incr(vector<int>& num, int i){
        if(i == num.size()-1){
            return true;
        }

        if(num[i] <= num[i+1]){
            return incr(num, i+1);
        }
        return false;
    }

    bool decr(vector<int>& num, int i){
        if(i == num.size()-1){
            return true;
        }

        if(num[i] >= num[i+1]){
            return decr(num, i+1);
        }
        return false;
    }
    bool isMonotonic(vector<int>& nums) {
        if(incr(nums, 0) == false && decr(nums, 0) == false) return false;
        else return true;
    }
};