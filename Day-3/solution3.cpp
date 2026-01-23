class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < nums[high]) {
                // Minimum lies in left part including mid
                high = mid;
            }
            else if (nums[mid] > nums[high]) {
                // Minimum lies in right part
                low = mid + 1;
            }
            else {
                // nums[mid] == nums[high], shrink search space
                high--;
            }
        }
        return nums[low];
    }
}; 
