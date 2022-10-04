# An explanation of a tree data structure
```A tree is a non-linear, hierarchical data structure made up of a number of nodes, each of which contains a value as well as a list of links to other nodes (referred to as "children").```

```This data structure is a specialised way to set up data storage and organisation in the computer so that it can be used more efficiently.``` It is made up of structural nodes, sub-nodes, and a central node that are all connected by edges. The roots, branches, and leaves of a tree data structure are all connected to one another.
![image](https://user-images.githubusercontent.com/104387424/193648006-27f74a98-ad9f-43e4-aa19-4d989482e4aa.png)

## Recursive Definition: 
- A tree consists of a root, and zero or more subtrees T1, T2, … , Tk such that there is an edge from the root of the tree to the root of each subtree.

![image](https://user-images.githubusercontent.com/104387424/193648243-6d241801-28bc-4e34-b687-4a646469416d.png)
## Tree is considered as a non-linear data structure—why?
- In other words, a tree does not store its data linearly or in a sequential manner. Instead, they are arranged in a hierarchical structure with several levels. The tree is regarded as a non-linear data structure as a result.
## Tree Terminologies
#### Node
- A node is an entity that contains a key or value and pointers to its child nodes.
- The last nodes of each path are called ***leaf nodes or external nodes*** that do not contain a link/pointer to child nodes.
- The node having at least a child node is called an ***internal node.***
#### Edge
- It is the link between any two nodes.

![image](https://user-images.githubusercontent.com/104387424/193649309-9ea83f9f-cb6b-4caa-94a6-d7194faefaec.png)
#### Root
- It is the topmost node of a tree.
#### Height of a Node
- The height of a node is the number of edges from the node to the deepest leaf (ie. the longest path from the node to a leaf node).
#### Depth of a Node
- The depth of a node is the number of edges from the root to the node.
#### Height of a Tree
- The height of a Tree is the height of the root node or the depth of the deepest node.

![image](https://user-images.githubusercontent.com/104387424/193649987-a25e7324-e95b-4590-bff9-0d006c6e39f9.png)
#### Degree of a Node
- The degree of a node is the total number of branches of that node.
#### Forest
- A collection of disjoint trees is called a forest.

![image](https://user-images.githubusercontent.com/104387424/193650245-8efc423d-aaf9-43cc-a410-725126cb6af3.png)
## Syntax:

<img width="296" alt="Screenshot 2022-10-03 at 11 57 22 PM" src="https://user-images.githubusercontent.com/104387424/193651465-7fbf1f0c-ace8-4ecd-a836-33511a653d46.png">

## Basic Operation Of Tree:

<img width="693" alt="Screenshot 2022-10-03 at 11 59 03 PM" src="https://user-images.githubusercontent.com/104387424/193651683-096e1293-6736-4720-94b0-01890485c1e0.png">

## Types of Tree data structures
#### 1. General tree
- A general tree data structure has no restriction on the number of nodes. It means that a parent node can have any number of child nodes.  
#### 2. Binary tree 
- A node of a binary tree can have a maximum of two child nodes. In the given tree diagram, node B, D, and F are left children, while E, C, and G are the right children.  
#### 3. Balanced tree
- If the height of the left sub-tree and the right sub-tree is equal or differs at most by 1, the tree is known as a balanced tree.

![image](https://user-images.githubusercontent.com/104387424/193652228-2c0cd7ff-d02b-4a98-a306-a88307adcc40.png)

#### 4. Binary search tree
- As the name implies, binary search trees are used for various searching and sorting algorithms. The examples include AVL tree and red-black tree. It is a non-linear data structure. It shows that the value of the left node is less than its parent, while the value of the right node is greater than its parent.
## Applications of Tree data structure:
***1. Spanning trees:*** It is the shortest path tree used in the routers to direct the packets to the destination.  
***2. Binary Search Tree:*** It is a type of tree data structure that helps in maintaining a sorted stream of data.  

- Full Binary tree
- Complete Binary tree
- Skewed Binary tree
- Stickily Binary tree
- Extended Binary tree

***3. Storing hierarchical data:*** Tree data structures are used to store the hierarchical data, which means data is arranged in the form of order.  
***4. Syntax tree:*** The syntax tree represents the structure of the program’s source code, which is used in compilers.  
***5. Trie:*** It is a fast and efficient way for dynamic spell checking. It is also used for locating specific keys from within a set.  
***6. Heap:*** It is also a tree data structure that can be represented in a form of an array. It is used to implement priority queues. 

## Reference
- [Geeks For Geeks](https://www.geeksforgeeks.org/)
- [Programiz](https://www.programiz.com/)
