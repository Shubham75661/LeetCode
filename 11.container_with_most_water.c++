class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int maxarea = 0;
        int area = 0;
        while(start<end){
            area = min(height[start], height[end])*abs(start-end);
            if(area>maxarea) maxarea = area;
            if(height[start] == min(height[start],height[end])){
                start++;
            }
            else{
                end--;
            }
        }
        return maxarea;
    }
};