// Selection Sort Algorithm in C

#include <stdio.h>
#include <stdlib.h>

// Selection Sort Function
void selectionsort(int arr[], int n)
{
    int min;

    for (int i = 0; i < n - 1; i++)
    {
        // Assume that current element is minimum
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            // Find the index of minimum element from i+1 to n-1
            if (arr[min] > arr[j])
                min = j;
        }
        // swap currant element and minimum element
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main()
{

    // Create Array
    int arr[] = {6, 5, 4, 3, 2, 1, 0};

    // Size of Array
    int n = 7;

    // Call selection sort function
    selectionsort(arr, n);

    // Print Sorted Array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
