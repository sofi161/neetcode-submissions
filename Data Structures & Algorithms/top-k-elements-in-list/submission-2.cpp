class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        }

        priority_queue<pair<int,int>> pq;
        // count,number
        for(auto c: count){
            pq.push({c.second, c.first});
            // we want to arrange by count in desc order
        }

        vector<int> result;
        while(k--){
            result.push_back(pq.top().second);
            // second because it stores the number to return
            pq.pop();
        }
        
        return result;
    }
};
