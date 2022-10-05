# Intro
The 0-1 Knapsack problem is a standard Dynamic Programming Problem. It introduces us to the idea of choice making, sub-problems redundancy. The problem can be solved using simple Recursion which would give Time Limit Exceeded(TLE) problem. We can apply the idea of DP of storing the values for the repeating subproblems instead of re-computing them. Thus, removing the problem of TLE.

# Problem Statement
We are given two arrays of size n - weights and values where each index i symbolises an item with weight of weights[i] and of value of values[i]. We are also given a parameter W representing the knapsack capacity. We need to find the maximum value we can obtain by adding subset of the items we have such that the total weight is less than or equal to W. We cannot break the item into smaller parts.(Note- If we could break the problem then this problem would change to a Greedy problem instead of DP).

# Example
## Input
Number of items=3
weights={1,2,3}
value={5,9,10}
Weight of Knapsack (W)=5;

## Output
Value generated is: 19

# Solution
Here we have discussed The bottom-up approach.