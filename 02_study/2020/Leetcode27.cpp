class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int pSlow = 0, pFast = 0;
        for (; pFast < size; pFast++){
            if (val != nums[pFast]){
                nums[pSlow++] = nums[pFast];
            }
        }
        return pSlow;
    }
};