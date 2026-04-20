class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(int i=0; i<s.size(); i++){
            if(s[i]>=48&&s[i]<=57||s[i]>=97&&s[i]<=122){
                str += s[i];
            }
            if(s[i]>=65&&s[i]<=90){
                str += tolower(s[i]);
            }
        }
        int left = 0,right = str.size()-1;
        while(left<=right){
            if(str[left]!=str[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
