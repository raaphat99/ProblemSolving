#include <vector>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        int tos = -1;

        for (int i=0; i<s.size(); i++) {
            char ch = s[i];
            if(ch == '(' || ch == '[' || ch == '{' ) 
            {
                stack.push_back(ch);
                tos++;
            }
            else 
            {
                if (stack.empty())
                    return false;
                char top = stack[tos];
                if ((top == '(' && ch == ')') || (top == '[' && ch == ']') || (top == '{' && ch == '}')) 
                    { stack.pop_back(); tos--; }
                else 
                    return false;
            }
        }

        return stack.empty();
    }
};
