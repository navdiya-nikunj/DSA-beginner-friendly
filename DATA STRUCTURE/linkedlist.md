# What is *linked list* ?

- A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers as shown in the below image:

![image](https://user-images.githubusercontent.com/114823350/193447946-e4b1c545-b710-4aac-a87e-8bcbffd5543f.png)

## Types of linked list :

1. Singly linked list
2. Doubly linked list
3. Circular linked list
4. Misc

## Array vs linked list :

### Array : 
- Arrays store elements in contiguous memory locations, resulting in easily calculable addresses for the elements stored and this allows faster access to an element at a specific index.

### linked list :
- Linked lists are less rigid in their storage structure and elements are usually not stored in contiguous locations, hence they need to be stored with additional tags giving a reference to the next element. 
This difference in the data storage scheme decides which data structure would be more suitable for a given situation. 

![image](https://user-images.githubusercontent.com/114823350/193448763-6cfaf1f3-9f89-43b8-95b4-3c016a1274af.png)

![image](https://user-images.githubusercontent.com/114823350/193448778-d1fc6ff0-0cb7-488c-8a18-3b1e9e57a4c6.png)

![image](https://user-images.githubusercontent.com/114823350/193448821-caff0b65-ab08-4346-a347-4fe1025d5b82.png)

## Advantages of linked list over array :
- Dynamic array
- Ease of insertion/deletion

## Disadvantages of linked list:
- Random access is not allowed. We have to access elements sequentially starting from the first node(head node). So we cannot do a binary search with linked lists efficiently with its default implementation
- Extra memory space for a pointer is required with each element of the list. 
- Not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists.

## Source :
- [geeksforgeeks](https://www.geeksforgeeks.org/data-structures/linked-list/?ref=lbp)
