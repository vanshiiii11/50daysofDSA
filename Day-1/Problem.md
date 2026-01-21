## 🔹 Problem
## Search in Rotated Sorted Array II

**Link:** https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/?envType=problem-list-v2&envId=array

## Problem Statement
There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).
Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such
that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].
Given the array nums after the rotation and an integer target, return true if target is in nums, 
or false if it is not in nums.

## Approach
Used modified binary search with two pointers (left, right) on a rotated sorted array.
Handled duplicates by shrinking the range when nums[left] == nums[mid] == nums[right], 
otherwise moved pointers based on which half is sorted to locate the target efficiently.

## Complexity:
## Time Complexity:
Average case: O(log n)
Worst case (many duplicates): O(n)
(This is unavoidable due to ambiguous duplicate cases.)

## Space Complexity:
O(1) (constant extra space)
