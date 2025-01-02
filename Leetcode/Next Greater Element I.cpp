class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        stack<int> stack;
        
        for (int i=0; i<nums2.size(); i++) {
            int num = nums2[i];
            while (!stack.empty() && stack.top() < num) {
                map.insert({stack.top(), num});
                stack.pop();
            }
            stack.push(num);
        }

        for(int i=0; i<nums1.size(); i++) {
            int num = nums1[i];
            if (map.count(num)) {
                nums1[i] = map[num];
            }
            else {
                nums1[i] = -1;
            }
        }

        return nums1;
    }
};
