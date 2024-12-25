class Solution {
public:
    bool isLowercaseAlphaNumeric(char ch) {
        return (tolower(ch) >= 'a' && tolower(ch) <= 'z') || (ch >= '0' && ch <= '9');
    }
    
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left <= right) {
            if (!isLowercaseAlphaNumeric(s[left])) {
                left++; continue;
            }
            if (!isLowercaseAlphaNumeric(s[right])) {
                right--; continue;
            }
            if(tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
