class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>match;
        int n = s.length();
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                match.push(i);
            }
            else if(s[i] == ')'){
                int st = match.top() + 1;
                int e = i;
                reverse(s.begin() + st, s.begin() + e);
                match.pop();
            }
        }

        string ans="";
        for(int i = 0; i<n; i++){
            if(s[i] == '(' || s[i] == ')'){
                continue;
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
// Looking for new solution JK