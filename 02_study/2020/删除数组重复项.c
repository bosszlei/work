int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0) return 0;
    int *p_quick;
    int *p_slow;
    p_quick = nums + 1;
    p_slow = nums;
    while (p_quick < nums + numsSize){
        if (*p_slow != *p_quick){
            p_slow++;
            *p_slow = *p_quick;
        }
        p_quick++;
    }
    return p_slow - nums + 1;
}