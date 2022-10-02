# What is array ?

- An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).

![image](https://user-images.githubusercontent.com/106215707/193446796-f8b08070-5cd8-4889-bf4c-5c708822d06c.png)

The above image can be looked as a top-level view of a staircase where you are at the base of the staircase. Each element can be uniquely identified by their index in the array (in a similar way as you could identify your friends by the step on which they were on in the above example).
# Properties of array data structure:-

### An array data structure has several properties:

- The elements stored within an array have the same data types and the same size, i.e. data type of int will have size of 4 bytes.
- The contiguous memory location is used for storing the elements of a data structure. The smallest memory is allocated to the first element in the array.
- Index values are used to find the location of the elements in an array. The index starts with 0 and is always less than the total number of elements in the array. 
- Random access of the elements in the array is possible due to the available index value. The address of the element can be calculated through the base address added to an offset value.
- The concept of the array remains the same in all the programming languages. Only the initialization and declaration vary.
- Array name, elements, and data type are the three parts that will be common in all languages

# Array Representation:-

Arrays can be declared in various ways in different languages. For illustration, let's take C array declaration.

![image](https://user-images.githubusercontent.com/106215707/193447702-6cb09a36-fb28-438b-8a73-93dc185566df.png)

![image](https://user-images.githubusercontent.com/106215707/193447973-8154626c-4433-4af6-9c92-734b387153dd.png)


Arrays can be declared in various ways in different languages. For illustration, let's take C array declaration.

![image](https://user-images.githubusercontent.com/106215707/193447712-9c2b0e68-1cbb-4500-a3f4-635dcfd1c1be.png)

![image](https://user-images.githubusercontent.com/106215707/193447959-968e72f5-c545-46c3-87a7-ed849f0d5241.png)


### As per the above illustration, following are the important points to be considered.

- Index starts with 0.
- Array length is 10 which means it can store 10 elements.
- Each element can be accessed via its index. For example, we can fetch an element at index 6 as 9.

### Basic Operations
Following are the basic operations supported by an array.

- Traverse − print all the array elements one by one.
- Insertion − Adds an element at the given index.
- Deletion − Deletes an element at the given index.
- Search − Searches an element using the given index or by the value.
- Update − Updates an element at the given index.

# Source:-

- [tutorialspoint](https://www.tutorialspoint.com/data_structures_algorithms/array_data_structure.htm)

- [upgrad](https://www.upgrad.com/blog/array-in-data-structure-explanation-function-examples/#:~:text=An%20array%20data%20structure%20has%20several%20properties%3A%201,the%20elements%20in%20an%20array.%20...%20More%20items)

- [geeksforgeeks](https://www.geeksforgeeks.org/array-data-structure/#introduction)
