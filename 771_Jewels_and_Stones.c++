class Solution {
public:
    int numJewelsInStones(string je, string s) {
        int ans =0;
        for(int i=0; i<je.length(); i++){
            for(int j=0; j<s.length(); j++){
                if(je[i]==s[j]){
                    ans++;
                }
            }
        }
        return ans;
    }
};