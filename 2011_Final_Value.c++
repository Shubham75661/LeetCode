class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int n = 0;
        int ans = 0;
        while(n<o.size()){
            if(o[n][1] == '-'){
                ans--;
            }
            else {
                ans++;
            }
            n++;
        }
        return ans;
    }
};