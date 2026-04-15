class Solution {
public:
    int search(vector<int>& nums, int target) {
  int i=0,j=nums.size()-1;
        while(i <= j) {
            int mid = i + (j - i) / 2;  // Prevent integer overflow
            
            if(nums[mid] == target) {
                return mid;
            }

            // Check if the left half is sorted
            if(nums[mid] >= nums[i]) {  
                if(target >= nums[i] && target < nums[mid]) {
                    j = mid - 1;  // Search in the left half
                } else {
                    i = mid + 1;  // Search in the right half
                }
            } 
            // Otherwise, the right half must be sorted
            else {  
                if(target > nums[mid] && target <= nums[j]) {
                    i = mid + 1;  // Search in the right half
                } else {
                    j = mid - 1;  // Search in the left half
                }
            }
        }
        
        return -1;  // Target not found
    }
};