class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>st;
        vector<int>ans(t.size());

        for(int i = t.size()-1 ; i>=0; i--){
            if(st.empty()){
                st.push(i);
                ans[i] = 0;
            }
            else{
                while(!st.empty() && t[st.top()] <= t[i]){
                    st.pop();
                }
                if(st.empty()){
                    st.push(i);
                    ans[i] = 0;
                }
                else if(t[st.top()]> t[i]){
                    ans[i] = st.top()-i;
                    st.push(i);
                }
            }
        }
        return ans;
    }
};

// Approch 2 not using stack IMP learn more about this

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int bt = INT_MIN;
        vector<int>ans(t.size());

        for(int i = t.size()-1 ; i>=0; i--){
           if(t[i]>= bt){
               bt = t[i];
               ans[i] = 0;
           }
           else{
               int it = i + 1;
               while(t[i] >= t[it]){
                   it += ans[it];
               }
               ans[i] = it - i;
           }
        }
        return ans;
    }
};