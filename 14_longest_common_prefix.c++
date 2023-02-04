string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i = 0; i<strs[0].length(); i++){
            bool match = true;
            char ch = strs[0][i];
            for(int j = 1; j< strs.size(); j++){
                if(strs[j][i] != ch){
                    match = false;
                    break;
                }
            }
            if(match == false){
                return ans;
            }
            ans.push_back(ch);
        }
        return ans;
    }