 Problem
Longest Consecutive Sequence
Link: https://leetcode.com/problems/longest-consecutive-sequence/description/

Problem Statement
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
You must write an algorithm that runs in O(n) time.

Approach
Store all elements in an unordered_set to allow O(1) lookups and remove duplicates.
For each number, start counting only if num - 1 is not present, ensuring it’s the beginning of a sequence.
Extend the sequence by checking consecutive numbers (num + 1, num + 2, …) in the set.
Track and update the maximum length found during this process.

Complexity:
Time Complexity:
Best Case: O(n) — each element is inserted into the hash set and checked once.
Average Case: O(n) — constant-time hash operations on average.
Worst Case: O(n) — even with hash collisions, the algorithm does not use nested loops over n.

Space Complexity:
O(n)
