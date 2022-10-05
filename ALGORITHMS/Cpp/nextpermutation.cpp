// Next permutation problem

#include <iostream>

using namespace std;

// Function to check weather an array reverse sorted or not
bool revsorted(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            count++;
        }
    }
    if (count == 0)
    {
        return true;
    }
    return false;
}

// Function to reverse an array
int reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
    return 0;
}

int main()
{

    int n;

    // Take input size of an array
    cin >> n;

    int *arr = new int[n];

    // Take an array in input from user
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Check weather an array reverse sorted or not

    // If an array is reverse sorted reverse it
    if (revsorted(arr, n))
    {
        reverse(arr, n);
    }

    // If an array is not reverse sorted swap last element and second last element
    else
    {
        int temp = arr[n - 1];
        arr[n - 1] = arr[n - 2];
        arr[n - 2] = temp;
    }

    // Print element of an array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}