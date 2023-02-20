class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>st;
        
        for(int i = 0; i<nums1.size(); i++){
            if(nums1[i]>nums1.size()){
                st.push_back(-1);
            }
            else{
                for(int j = 0; j<nums2.size(); j++){
                    if(nums2[j] == nums1[i] && j+1 < nums2.size()){
                        st.push_back(nums2[j+1]);
                    }
                    else if(j+1 >= nums2.size()){
                        st.push_back(-1);
                    }
                }
            }
        }
        return st;
    }
};