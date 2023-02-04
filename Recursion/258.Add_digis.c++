class Solution {
public:
    int addDigits(int n) {
        if(n<10){
            return n;
        }
        int ans =addDigits((n%10)+(n/10));
        return ans;
    }
};