class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1);
        stack<int> stack;

        for (int i=0; i<n*2; i++) {
            while (!stack.empty() && nums[stack.top()] < nums[i % n]) {
                result[stack.top()] = nums[i % n];
                stack.pop();
            }

            if (i < n) {
                stack.push(i);
            }
        }

        return result;
    }
};
