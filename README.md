Question A

You are given a string s and an integer k. Encrypt the string using the following algorithm:

For each character c in s, replace c with the kth character after c in the string (in a cyclic manner).
Return the encrypted string.

 

Example 1:

Input: s = "dart", k = 3

Output: "tdar"

Explanation:

For i = 0, the 3rd character after 'd' is 't'.
For i = 1, the 3rd character after 'a' is 'd'.
For i = 2, the 3rd character after 'r' is 'a'.
For i = 3, the 3rd character after 't' is 'r'.

Question B

You are given a positive integer n.

A binary string x is valid if all substrings of x of length 2 contain at least one "1".

Return all valid strings with length n, in any order.

 

Example 1:

Input: n = 3

Output: ["010","011","101","110","111"]

Explanation:

The valid strings of length 3 are: "010", "011", "101", "110", and "111".

Question C

Given a 2D character matrix grid, where grid[i][j] is either 'X', 'Y', or '.', return the number of submatrices that contains:

grid[0][0]
an equal frequency of 'X' and 'Y'.
at least one 'X'.

#happyCoding
