# **What is Stack?**

- **Stack** in Data Structures is a linear type of data structure that follows the **LIFO (Last-In-First-Out) principle** in which the operations are performed 
and allows insertion and deletion operations from one end of the stack data structure, that is top.

- Real-life examples of a stack are a deck of cards, piles of books, piles of money, and many more.
![image](https://user-images.githubusercontent.com/114824018/193454414-541a050b-9401-4c03-8704-2c7496d52232.png)

- This example allows you to perform operations from one end only, like when you insert and remove new books from the top of the stack. It means insertion and deletion in the stack data structure can be done only from the top of the stack.
You can access only the top of the stack at any given point in time.
- And we can say that the plate which has been placed at the bottommost position remains in the stack for the longest period of time just like the book in piles.

## Stack Representation 
![image](https://user-images.githubusercontent.com/114824018/193454647-e37ae61b-512c-4f34-ac9a-83857db1af3f.png)
There are two operations shown in above diagram : 
- 1)Push Operation
- 2)Pop Operation
- We will further discuss it in detail.

## Implementation Of Stack in Data Structure
You can perform the implementation of stacks in data structures using two data structures that are an array and a linked list.
- **Array:** In array implementation, the stack is formed using an array. All the operations are performed using arrays.
![image](https://user-images.githubusercontent.com/114824018/193455275-e3527e82-3030-40e8-be18-d7b2b421cbd1.png)
#### Advantages of array implementation:
- Easy to implement.
- Memory is saved as pointers are not involved.
#### Disadvantages of array implementation:
- It is not dynamic.
- It doesn’t grow and shrink depending on needs at runtime.

- **Linked-List:** Every new element is inserted as a top element in the linked list implementation of stacks in data structures. 
That means every newly inserted element is pointed to the top. Whenever you want to remove an element from the stack, 
remove the node indicated by the top, by moving the top to its previous node in the list.

![image](https://user-images.githubusercontent.com/114824018/193455320-3830a6ca-fd73-474a-8ce8-9034e79e709c.png)

#### Advantages of Linked List implementation:
- The linked list implementation of a stack can grow and shrink according to the needs at runtime.
- It is used in many virtual machines like JVM.
- Stacks are more secure and reliable as they do not get corrupted easily.
- Stack cleans up the objects automatically.
#### Disadvantages of Linked List implementation:
- Requires extra memory due to the involvement of pointers.
- Random accessing is not possible in stack.
- The total size of the stack must be defined before.
- If the stack falls outside the memory it can lead to abnormal termination.

## Basic Operations on Stack
In order to make manipulations in a stack, there are certain operations provided to us.
- **push()** to insert an element into the stack
- **pop()** to remove an element from the stack
- **top()** Returns the top element of the stack.
- **isEmpty()** returns true is stack is empty else false
- **size()** returns the size of stack
## Types of Stack
There are basically two types of stack :
- **Register Stack:** This type of stack is also a memory element present in the memory unit and can handle a **small amount of data only.** 
The height of the register stack is always limited as the size of the register stack is very small compared to the memory.
- **Memory Stack:** This type of stack can handle a **large amount of memory data.** 
The height of the memory stack is flexible as it occupies a large amount of memory data.
## Applications of Stack
Here are the top 7 applications of the stack in data structure:
- Expression Evaluation and Conversion
- Backtracking
- Function Call
- Parentheses Checking
- String Reversal
- Syntax Parsing
- Memory Management

###### Links to Refered:
- [Geeksforgeeks](https://www.geeksforgeeks.org/stack-data-structure/#:~:text=Stack%20is%20a%20linear%20data,one%20another%20in%20the%20canteen.)
- [Javatutorial](https://www.javatpoint.com/data-structure-stack)
