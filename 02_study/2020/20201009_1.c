#include <stdio.h>

void quickSort(int * arr, int left, int right);

int main(void)
{
	int testArr[] = {20,9,8,7,6,5,4,3,2,1,};
	int size = sizeof(testArr) / sizeof(*testArr);
	int i;
		
	quickSort(testArr, 0, size - 1);
	
    for (i = 0; i < size; i++)
		printf("%d ", testArr[i]);	
	return 0;
}

void quickSort(int * arr, int left, int right)
{
	int first = left, last = right;
	int base = arr[first];
	
	if (left >= right)
		return;
	
	while (first < last) {
		while(first < last && arr[last] >= base)
			last--;
		arr[first] = arr[last];
		
		while(first < last && arr[first] <= base)
			first++;
		arr[last] = arr[first];	
	}
	
	arr[first] = base;
	
	quickSort(arr, left, first - 1);
	quickSort(arr, first + 1, right);	
}

