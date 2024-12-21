class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size()-1, mid;
        while (low < high) {
            mid = (low + high) / 2;
            if (nums[mid] < nums[mid+1]) {
                // peak must be in the right side
                low = mid + 1;
            } else {
                // peak must be in the left side (including mid)
                high = mid;
            }
        }
        return low;
    }
};
