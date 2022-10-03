def insertionsort(arr):
    for i in range(1,len(arr)):
        store = arr[i]
        j=i-1
        while j>=0 and store<arr[j]:
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=store
        print(arr)
    return arr
arr = [2,6,5,4,8,9,7]
print(insertionsort(arr))
