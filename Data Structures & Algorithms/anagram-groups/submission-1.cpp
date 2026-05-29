class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        //key: (act)unique string, pair: their anagrams
        // create a array/vector of 26 spaces and mark 1 for a->0th place
        for(auto s: strs){
            vector<int> count(26,0);
            for(char c : s){
                count[c-'a']++;
            }
            // convert vector -> string of unique key eg 1,0,1,0,0,..
            string key = to_string(count[0]); 
            for(int i=1; i<26; i++){
                key += ','+ to_string(count[i]);
            }
            // act is 1,0,1,0,0,.. where 1 is at 0,2, 19th place
            res[key].push_back(s);
        }

        vector<vector<string>> result;
        for(auto pair : res){
            result.push_back(pair.second);
        }

        return result;
    }
};
