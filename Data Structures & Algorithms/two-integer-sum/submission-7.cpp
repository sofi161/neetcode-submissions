class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // better approach
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            int remTarget = target-nums[i];
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j] == remTarget){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
                }
            }
        }
        return ans;
    }
};
