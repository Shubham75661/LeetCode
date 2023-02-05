class Solution {
private:
    vector<char> rev(vector<char> &st, int s, int e){
        if(s>e){
            return st;
        }
        swap(st[s], st[e]);
        return rev(st, s+1, e-1);
    }
public:
    void reverseString(vector<char>& s) {
        rev(s, 0, s.size()-1);
    }
};