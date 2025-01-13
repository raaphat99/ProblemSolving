class Solution {
public:
    int firstUniqChar(string s) {
        queue<char> queue;
        unordered_map<char, int> charIndex;
        unordered_map<char, int> charOcc;

        for (int i=0; i<s.size(); i++) {
            char ch = s[i];

            if (!charIndex[ch])
                charIndex[ch] = i;
            
            if (charOcc[ch])
                charOcc[ch]++;
            else
                charOcc[ch] = 1;

            queue.push(ch);
        }

        while(!queue.empty()) {
            char front = queue.front();
            if (charOcc[front] == 1) {
                return charIndex[front];
            } else {
                queue.pop();
            }
        }

        return -1;
    }
};
