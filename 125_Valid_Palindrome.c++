class Solution {
private:
    bool validChar(char ch ){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }

    char toLowercase(char ch){
        if(ch>='A' && ch<='Z'){
            char temp = ch - 'A' + 'a';
            return temp;
        }
        return ch;
    }

    bool palindromeval(string s){
        int i = 0;
        int j = s.length()-1;
        while(i<=j){
            if(s[i] != s[j]){
                return 0;
            }
            else{
                i++;
                j--;
            }
        }
        return 1;
    }

public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i= 0; i< s.length(); i++){
            if(validChar(s[i])){
                temp.push_back(s[i]);
            }
        }

        for(int i = 0 ; i<temp.length(); i++){
            temp[i] = toLowercase(temp[i]);
        }
        return palindromeval(temp);
    }
};