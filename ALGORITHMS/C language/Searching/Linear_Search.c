// Linear search in c language

#include <stdio.h>

// Linear search function

int linear_search_function(int arr[], int target, int arr_length)
{
    // Iterate loop arr_length times.

    for (int i = 0; i < arr_length; i++)
    {
        // check whether target is present

        if (arr[i] == target)
        {
            // return index of target

            return i;
        }
    }
        return -1;
}

int main()
{
    int arr[] = {5, 8, 3, 7, 12, 3, 2, 10, 9};

    int arr_length = 9;

    int target = 121;

    // Linear search function call

    int ans = linear_search_function(arr, target, arr_length);
    if (ans == -1)
    {
        printf("Target is not present in Array.");
    }
    else
    {
        printf("\n Index of target id : %d", ans);
    }

    return 0;
}
