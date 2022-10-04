# **What is a Heap?**
- A **Heap** is a special Tree-based data structure in which the tree is a complete binary tree.

## HEAP Representation

![image](https://user-images.githubusercontent.com/85685489/193769478-fda12754-7ddc-4764-8ffc-cb923250da24.png)


## Types of Heap Data Structure

Generally, Heaps can be of two types:

- **MIN HEAP :** In a Min-Heap the key present at the root node must be minimum among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.

- **MAX HEAP :** In a Max-Heap the key present at the root node must be greatest among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.

## Representation of Heap Data Structure using arrays
- A binary heap is space-efficient and can be easily represented in an array. We should keep the following points in mind while representing a binary heap in an array.
In an array, ‘ARR’:

![image](https://user-images.githubusercontent.com/85685489/193773160-f2cb5350-8356-4062-a1a4-68489b734af5.png)

Example :

![image](https://user-images.githubusercontent.com/85685489/193773271-5092e452-a7f4-435b-9994-0018e2f75404.png)

- The above binary tree is a complete binary tree so we can represent it in an array in the following way:

![image](https://user-images.githubusercontent.com/85685489/193773344-aa40056c-a271-49f9-a3cc-bc9051e287a8.png)

- Thus we start with level 0, i.e., element “10,” and fill it as the first element of the array and then increment the pointer. Now we are at level 1, and we will fill the array with the first child node at this level, i.e., with the number “9,” and then proceed to the number “8”.

- Similarly, now we will start with the first element of level 2 and fill our array accordingly. 

- A binary heap follows level order traversal, which means every node on a level is visited before going on to the next level. In this way, a binary heap can easily be stored in an array. 


## Operation on Heap Data Structure

- **Heapify :** a process of creating a heap from an array.

- **Insertion :** process to insert an element in existing heap time complexity O(log N).

- **Deletion :** deleting the top element of the heap or the highest priority element, and then organizing the heap and returning the element with time complexity O(log N).

- **Peek :** to check or find the most prior element in the heap, (max or min element for max and min heap).


## Applications of Heap Data Structure

- Heaps are used in many famous algorithms such as Dijkstra's algorithm for finding the shortest path 
- In the heap sort sorting algorithm
- In implementing priority queues
- In accessing the maximum or minimum element very quickly
- Heap Sort is used in systems concerned with security and embedded systems, such as the Linux Kernel


# Links to Refer

- https://www.codingninjas.com/codestudio/library/implementation-of-heap
- https://www.geeksforgeeks.org/building-heap-from-array/?ref=rp
- https://www.geeksforgeeks.org/heap-data-structure/
- https://www.javatpoint.com/heap-data-structure









