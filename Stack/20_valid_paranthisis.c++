class Solution {
public:
    bool isValid(string s) {
       stack<char> ans;
       for(int i = 0; i<s.length(); i++){
           if(s[i] == 41 || s[i] == 125 || s[i] == 93){
               if(!ans.empty()){
                   bool check = abs(s[i]-ans.top()) <=2;
                   if(!check) return false;
                    ans.pop();
               }
               else{
                   return false;
               }
           }
           else if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
               ans.push(s[i]);   
           }
       }
       if(!ans.empty()){
           return false;
       }
        return true;
    }
};