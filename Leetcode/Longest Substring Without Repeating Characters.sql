#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    int freq[128] = {0};
    int lengthOfLongestSubstring(string s) {
        int left = 0, result = 0;

        for (int right = 0; right < s.size(); right++) {
            char currentChar = s[right];
            freq[currentChar]++;

            // Shrink the window until there are no duplicates
            while (freq[currentChar] > 1) {
                freq[s[left]]--;
                left++;
            }

            // Update the result with the current window size
            result = max(result, right - left + 1);
        }
        return result;
    }
};
