class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s=0, e= heights.size()-1;
        int maxCount = 0;
        while(s<e){
            maxCount = max((e-s)*min(heights[s], heights[e]), maxCount);

            if(heights[s] <= heights[e]) s++;
            else e--;
        }
        return maxCount;
    }
};
