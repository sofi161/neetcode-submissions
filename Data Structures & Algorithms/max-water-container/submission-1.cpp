class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s=0, e= heights.size()-1;
        int count = 0, maxCount = 0;
        while(s<e){
            count = (e-s)*min(heights[s], heights[e]);
            maxCount = max(count, maxCount);

            if(heights[s] <= heights[e]) s++;
            else e--;
        }
        return maxCount;
    }
};
