#include "bits/stdc++.h"

using namespace std;

void selection(int a[], int n)
{
    int min_idx;
    for (int i = 0; i < n; i++)
    {
        // Find minimum element in unsorted array

        min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx])
                min_idx = j;
        }
        // Swapping found minimum element with
        // First elemnt

        swap(a[i], a[min_idx]);
    }
}
int main()
{
    int n, a[100];
    cin >> n;

    // Taking Input of array

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    //function calling
    selection(a, n);

    // Printing sorted array

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
// This code is contributed
