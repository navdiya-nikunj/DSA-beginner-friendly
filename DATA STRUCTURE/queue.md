# What is Queue?

- ```A queue is described as a linear data structure with open ends and FIFO (First In, First Out) execution of operations.```
- A queue, according to our definition, is a list in which all additions are made at one end and all deletions are made at the other. The operation is started on the element that is pushed into the order first. 
![image](https://user-images.githubusercontent.com/104387424/193451293-a999f382-0edf-4b5f-960c-e319d2ae9964.png)
### FIFO Principle of Queue:
- The first person in a queue gets served first, just like in a line waiting to buy tickets. (First come, first served, etc.)
- The position of the last entry in the queue, that is, the one that was most recently added, is known as the **rear** (or tail) of the queue. Similarly, the position of the entry in a queue ready to be served, that is, the first entry that will be removed from the queue, is referred to as the front of the queue (sometimes, head of the queue). See the image below.
![image](https://user-images.githubusercontent.com/104387424/193451545-04091918-5100-46ae-8b01-55424f18b038.png)
### Characteristics of Queue:
- Queue can handle multiple data.
- We can access both ends.
- They are fast and flexible.
### Queue Representation:
Queues can be represented in an array just like stacks: The array is used to implement the Queue in this representation. The variables in this scenario are
- **Queue:** the name of the array storing queue elements.
- **Front:** the index where the first element is stored in the array representing the queue.
- **Rear:** the index where the last element is stored in an array representing the queue.
### Example
A simple queue implemented in JavaScript:

<img width="380" alt="Screenshot 2022-10-02 at 5 10 04 PM" src="https://user-images.githubusercontent.com/104387424/193452281-c5ea46a0-b7d1-45e8-92a7-0a1978879cd7.png">

### Reference From

[Geeks For Geeks](https://www.geeksforgeeks.org/)
