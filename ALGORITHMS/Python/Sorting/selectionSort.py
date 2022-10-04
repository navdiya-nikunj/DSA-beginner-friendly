def selectionsort(arr):
    for i in range(len(arr)):
        min = i
        for j in range(i+1,len(arr)):
            if arr[min]>arr[j]:
                min = j
        arr[i],arr[min] = arr[min],arr[i]
        print(arr)
    return arr
arr = [2,6,4,8,9,7,3,1]
print(selectionsort(arr))
