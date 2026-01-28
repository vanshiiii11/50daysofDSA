## Problem
## Reversed Linked List
## Link: https://leetcode.com/problems/reverse-linked-list/description/

## Problem Statement
Given the head of a singly linked list, reverse the list, and return the reversed list.
Example 1:
<img width="445" height="189" alt="image" src="https://github.com/user-attachments/assets/fc922ee2-2fb7-47f6-bb7b-a8e230424905" />

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

## Approach:
We reverse the linked list iteratively by changing the direction of pointers.
Using three pointers (prev, curr, nextNode), we move through the list and reverse each next link one by one.
At the end, prev points to the new head of the reversed list.

## Complexity:
## Time Complexity:
O(n) — we traverse the linked list exactly once, where n is the number of nodes.

## Space Complexity:
O(1) — reversal is done in-place using constant extra space (no recursion or extra data structures).
