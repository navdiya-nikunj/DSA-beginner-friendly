def bubblesort(arr):
    for i in range(len(arr)-1):
        for j in range(len(arr)-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
                print(arr)
    return arr
arr = [2,6,5,4,8,9,7]
print(bubblesort(arr))
