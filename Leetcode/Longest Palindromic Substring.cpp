#include <vector>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {

        int strLen = s.length(), max_len = 1, start = 0, end = 0;
        vector<vector<bool>> dp;
        dp.resize(strLen, vector<bool>(strLen, false));

        if (strLen == 1) {
            return s;
        }

        for (int i=0; i<s.length(); i++) {
            // Every single character is always a palindrome
            dp[i][i] = true;
            for (int j=0; j<i; j++) {
                // if the starting and ending indices of the current substring are equal AND
                // the inner substr of it (if any) is palindrome, then it's a palindrome
                if( (s[j] == s[i]) && (i-j <= 2 || dp[j + 1][i - 1]) ) {
                    dp[j][i] = true;
                    // update max_len with the longest substring length found, and its starting/ending indices
                    int substr_len = i - j + 1;
                    if (substr_len > max_len) {
                        max_len = substr_len;
                        start = j;
                        end = i;
                    }
                }
            }
        }
        return s.substr(start, (end-start + 1));
    }
};
