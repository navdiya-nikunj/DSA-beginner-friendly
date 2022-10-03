# Binary Search in python

def binarySearch(arr, target, start, end):

    if end >= start:

        mid = start + (end - start)//2

        # If found at mid, then return it
        if arr[mid] == target:
            return mid

        # Search the left half
        elif arr[mid] > target:
            return binarySearch(arr, target, start, mid-1)

        # Search the right half
        else:
            return binarySearch(arr, target, mid + 1, end)

    else:
        return -1



binarySearch(arr, target, 0, len(arr)-1)
