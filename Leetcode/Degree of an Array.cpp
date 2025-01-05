class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq;
        unordered_map<int, int> firstOcc;
        int degree = 1, min_length = 1;

        for (int i=0; i<nums.size(); i++) {
            int n = nums[i];
            freq[n] = freq[n] ? ++freq[n] : 1;

            if (firstOcc.find(n) == firstOcc.end()) 
                firstOcc[n] = i; 
            
            if (freq[n] > degree) {
                degree = freq[n];
                min_length = i - firstOcc[n] + 1;
            }
            else if (freq[n] == degree) {
                min_length = min(min_length, (i - firstOcc[n] + 1));
            }

        }
        
        return min_length;
    }
};
