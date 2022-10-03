#include <stdio.h>
_Bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5, -2, 10, 4, 67, 34, -6, 5, 22, 1};
    // Whether 1 is present in the array or not
    int key;
    printf("enter the key\n");
    scanf("%d", &key);
    _Bool found = search(arr, 10, key);
    if (found)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }

    return 0;
}