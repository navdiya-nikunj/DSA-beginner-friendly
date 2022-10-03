// C program to implement recursive Binary Search
#include <stdio.h>

// A recursive binary search function.

int binarySearch(int arr[], int si, int ei, int target)
{
	if (ei >= si) {
		int mid = si + (ei - si) / 2;

		// If the element is present at the middle
		// itself
		if (arr[mid] == target)
			return mid;

		// Element can only be present in the left subarray 
        // if it is smaller than the midpoint.
		if (arr[mid] > target)
			return binarySearch(arr, si, mid - 1, target);

		// Otherwise, the element could only 
        // be found in the right subarray.
		return binarySearch(arr, mid + 1, ei, target);
	}

	// We reach here when element is not
	// present in array
	return -1;
}

int main(void)
{
	int arr[] = {5,8,3,6,0,10,11};
	int n = sizeof(arr) / sizeof(arr[0]);
	int target = 1;
	int result = binarySearch(arr, 0, n - 1, target);
    // ternary operator
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
