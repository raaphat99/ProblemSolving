class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;
        int mid, next, prev;
        while(low <= high) {
            if (nums[low] <= nums[high]) 
                return nums[low];

            mid = (low + high) / 2;
            next = (mid + 1) % n;
            prev = (mid + n - 1) % n;

            if(nums[mid] <= nums[next] && nums[mid] <= nums[prev])
                return nums[mid];
            
            if (nums[mid] <= nums[high])
                high = mid-1;
            else if (nums[mid] >= nums[low])
                low = mid+1;
        }
        return -1;
    }
};
