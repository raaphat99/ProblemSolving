class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstOccurrence = -1, lastOccurrence = -1;
        int low = 0, high = nums.size()-1, mid=-1;
        vector<int> result;

        // Get the first occurrence of the target number
        while(low <= high) {
            mid = (low+high)/2;
            if(target == nums[mid])
                {firstOccurrence = mid; high = mid - 1;}
            else if (target > nums[mid])
                low = mid+1;
            else
                high = mid-1;
        }

        low = 0; high = nums.size()-1; mid=-1;
        // Get the last occurrence of the target number
        while(low <= high) {
            mid = (low+high)/2;
            if(target == nums[mid])
                {lastOccurrence = mid; low = mid + 1;}
            else if (target > nums[mid])
                low = mid+1;
            else
                high = mid-1;
        }
        
        result.push_back(firstOccurrence);
        result.push_back(lastOccurrence);
        return result;
    }
};
