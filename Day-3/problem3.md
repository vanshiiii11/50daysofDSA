## Problem-3
## Find minimum in rotated sorted array-II
## Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/description/?source=submission-ac

## Problem Statement
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,4,4,5,6,7] might become:
[4,5,6,7,0,1,4] if it was rotated 4 times.
[0,1,4,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
Given the sorted rotated array nums that may contain duplicates, return the minimum element of this array.
You must decrease the overall operation steps as much as possible.

## Approach
We use a modified binary search to find the minimum element in a rotated sorted array that may contain duplicates. By comparing nums[mid] with nums[high],
we decide which half contains the minimum and shrink the search space accordingly. When both are equal, we safely reduce high to handle duplicates.

## Complexity:
## Time Complexity:
Best Case: O(log n)
Average Case: O(log n)
Worst Case: O(n) (when many duplicate elements force linear shrinking)

## Space Complexity:
O(1) 
