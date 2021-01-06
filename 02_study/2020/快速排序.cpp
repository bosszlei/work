#include <stdio.h>

void QuickSort(int* arr, int left, int right);
static int cnt = 0;

int main(void)
{
    int arr1[] = {10,1,34,13,6,3,12,15,17,20,18,16,12,1,2,3,1,2,6,7,5,6,7,4,5,7,13,34,87,45,23,
        34,34,2,4,5,7,134,45,345,34,2134,3434,234,23,45,234,3454,234,45,34,12,6,13,45,32,24,24};

    int arr2[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};

    int arr3[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int len = sizeof(arr1) / sizeof(int);
    int i;

    for (i = 0; i < len; i++){
        printf("%d ",*(arr1 + i));
    }
    printf("\n");

    //call quick sort function
    QuickSort(arr1, 0, len - 1);
    
    for (i = 0; i < len; i++){
        printf("%d ",*(arr1 + i));
    }
    printf("\n");
    printf("call %d times QuickSort func.\n", cnt);

    
    return 0;
}

void QuickSort(int* arr, int left, int right)
{
    int base = *(arr + left);
    int first = left, last = right;
    if (left >= right)
        return;
    while (first < last){
        while (first < last && *(arr + last) >= base){
            last--;
        }
        arr[first] = arr[last];
        
        while (first < last && *(arr + first) <= base ){
            first++;
        }
        arr[last] = arr[first];
    }
    arr[first] = base;
    QuickSort(arr, left, first - 1);
    QuickSort(arr, first + 1, right);
}





























