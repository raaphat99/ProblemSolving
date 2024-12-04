#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        vector<bool> flags;
        int i = 0, j = 0;
        while(i<str1.size()) {
            char nextChar = str1[i] == 'z' ? 'a' : str1[i]+1;
            if (str1[i] == str2[j] || nextChar == str2[j]) {
                flags.push_back(true);
                j++;
            }
            i++;
        }

        if (flags.size() == str2.size()) 
            return true;
        else
            return false;
    }
};
