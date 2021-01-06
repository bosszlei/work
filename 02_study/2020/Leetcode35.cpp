class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int left = 0, right = size - 1;
        while (left <= right){
            int mid = left + ((right - left)>>1);
            if (nums[mid] == target){
                return mid;
            } else if (nums[mid] > target){
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};