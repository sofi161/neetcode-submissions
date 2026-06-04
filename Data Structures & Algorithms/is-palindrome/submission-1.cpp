class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.size()-1;

        while(i<=j){
            if(isalnum(s[i]) && isalnum(s[j]) ){
                int convertedI = tolower(s[i]);
                int convertedJ = tolower(s[j]);
                if(convertedI != convertedJ) return false;
                i++; j--;
            }
            else if(!isalnum(s[i]) || s[i] == ' ') i++;
            else if(!isalnum(s[j]) || s[j] == ' ') j--;
            else{
                    i++; j--;
                }
        }
        return true;
    }
};
