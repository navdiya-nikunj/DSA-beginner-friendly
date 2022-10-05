# Linear Search

Linear search is a sequential search algorithm that start from one of the end and goes through each element, if the desired element is matched then the search stops otherwise the search will go on to the other end of the data set.
It is one of the easiest and simplest searching algorithm.


(linear-search.jpg)


    Input: arr[] = {10, 20, 80, 30, 60, 50,110, 100, 130, 170}, x = 110;
    Output: 6
    Explanation: Element x is present at index 6

    Input: arr[] = {10, 20, 80, 30, 60, 50,110, 100, 130, 170}, x = 175;
    Output: -1
    Explanation: Element x is not present in arr[].

   Below is the quick insight on how the searching is been done

    Iterate from 0 to N-1 and compare the value of every index with x if they match return index
Time Complexity: O(N)
Auxiliary Space: O(1)

 Follow the given steps to solve the problem:

    Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
    If x matches with an element, return the index.
    If x doesn’t match with any of the elements, return -1.
Linear Search can also be done with a recursive approch, a recursive approch cost as O(n) of auxilary space
Linear Search Recursive Approach:

 Follow the given steps to solve the problem:

    If the size of the array is zero then, return -1, representing that the element is not found. This can also be treated as the base condition of a recursion call.
    Otherwise, check if the element at the current index in the array is equal to the key or not i.e, arr[size – 1] == key
        If equal, then return the index of the found key.
Time Complexity: O(N)
Auxiliary Space: O(N), for using recursive stack space. 