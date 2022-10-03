# working on bubble sort in Python
# make a function in which we pass the array, compute the length


def bubbleSort(arr):
    n = len(arr)
    # flag variable in which we check, if element is swapped or not
    swapped = False
    for i in range(n-1):
        # iterating over the array twice, in order to sort only with the unsorted elements
        for j in range(0,n-i-1):
            if arr[j] > arr[j+1]:
                swapped = True
                # clever python way of swapping 2 variables
                arr[j], arr[j+1] = arr[j+1], arr[j]
    
    if not swapped:
        return


arr = [64,34,25,12,22,11,90]

# making the function call

bubbleSort(arr)

print("Sorted array is:")
for i in range(len(arr)):
    print(f"{arr[i]} ")

# Dhruv Dugar, 2022