class Solution {
public:
    bool isPalindrome(string s) {
        string strs = "";
        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                strs += tolower(s[i]);
            }
            else if(isdigit(s[i])) {
                strs += s[i];
            }
        }
        int left = 0 , right = strs.size()-1;
        while(left<right){
            if(strs[left]!=strs[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
