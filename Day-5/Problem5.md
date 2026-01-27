## 🔹 Problem
## Rotate Array

**Link:** https://leetcode.com/problems/rotate-array/description/?envType=problem-list-v2&envId=math

## Problem Statement
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

## Approach
Reverse the entire array first. Then reverse the first k elements and the remaining n−k
elements separately. This results in a right rotation of the array by k positions in-place.

## Complexity:
## Time Complexity: O(n)
## Space Complexity: O(1)
