#include <stdio.h>

/*
nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106
*/
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    if (nums1Size + nums2Size <= 0)
        return 0;

    int *p1, *p2;
    p1 = nums1;
    p2 = nums2;

    if ((nums1Size + nums2Size) % 2){ /*total size is old*/
        int size = (nums1Size + nums2Size) / 2 + 1;
        for (int i = 0; i < size; i++){
            if (*p1 <= *p2){
                p1++;
            } else {
                p2++;
            }
        }
        return (double)(*)
    } else {

    }


}