class Solution {
private:
    int sendAns(vector<int> &arr){
        int ans = 0;
        int pos,neg;
        pos = neg = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]> 0 ){
                pos+=1;
            }
            else if(arr[i] < 0){
                neg+=1;
            }
        }
        ans = max(pos, neg);
        return ans;
    }
public:
    int maximumCount(vector<int>& nums) {
        int ans = sendAns(nums);
        return ans;
    }
};