## Problem Statement
Given a set of strings, find the longest common prefix.(Using divide and conquer algorithm)

---
## Running the Code 

```
Download project
git clone https://github.com/maggi2k19/DAA
```
Initialisation: 
```
Go to assignment folder
cd DAA/Assignement-04
```
---

Sample Input and Output
```
Enter the number of strings: 4
Enter strings:
enclose
entangle
enslave
encase

Common Prefix: 
en 
```
---

**Test cases**

```
Test Case-1
Input:
3
unicorn
unicellular
universal

Output:
Common longest prefix : uni

Test Case-2
Input:
2 
mohan
mohana

Output:
Common longest prefix : mohan 
```

---

### Theory
The idea is to divide the set of strings into sub arrays and find longest common prefix and finally return them to the caller function . After returning we compare the two strings returned by the two parts of the array and find longest common prefix of the two strings.This technique of dividing,conquering and combining is Divide and Conquer algorithm.

---

### Analysis

**Time Complexity**

The time complexity of this algorithm is O(n*m).Where n is the Number of strings in the given set of strings and m is the maximum length of string from the set of strings given in the input.

**Space Complexity**

The space complexity of the Program is O(m*log(n)) Because of the space allocation for resultant strings in each subproblem.We can expect log(n) divisions.Each string returned by the subproblem can have maximum length of m.

----

### References

Introduction to Algorithms by Thomas.H.cormen

https://afteracademy.com/blog/longest-common-prefix

https://afteracademy.com/blog/longest-common-prefix 
