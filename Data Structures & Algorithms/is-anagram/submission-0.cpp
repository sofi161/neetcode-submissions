class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        return false;

        unordered_map<char,int> freqS;
        unordered_map<char,int> freqT;

        for(int i=0; i<s.size(); i++){
            freqS[s[i]]++;
            freqT[t[i]]++;
        }

        for(auto pair : freqS){
            char ch = pair.first; 
            // key value pair ka first is key

            if(freqS[ch] != freqT[ch])
            return false;
        }
        return true;
    }
};
