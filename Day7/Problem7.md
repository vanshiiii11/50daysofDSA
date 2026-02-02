## 🔹 Problem
## ADD DIGITS

**Link:** https://leetcode.com/problems/add-digits/description/

## Problem Statement
Given an integer num, repeatedly add all its digits until the result has only one digit,
and return it.
Example 1:
Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.

Example 2:
Input: num = 0
Output: 0

## Approach
The problem is to repeatedly add digits of a number until only one digit remains.
Instead of actually summing digits again and again, we use a mathematical observation:
Key Insight:
For any positive integer num, its digital root is:
## digitalRoot = 1 + (num - 1) % 9

## Special Case: If num == 0, the result is 0.
As Every number’s digital root cycles from 1 to 9
Multiples of 9 always result in 9
Modulo % 9 captures this pattern efficiently

## Complexity:
## Time Complexity: O(1) {Constant time, No loops, no recursion}
## Space Complexity: O(1) {No extra space used, Only simple arithmetic operations}
