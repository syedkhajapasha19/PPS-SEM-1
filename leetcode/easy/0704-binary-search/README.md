# Binary Search

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of integers `nums` which is sorted in ascending order, and an integer `target`, write a function to search `target` in `nums`. If `target` exists, then return its index. Otherwise, return `-1`.

You must write an algorithm with `O(log n)` runtime complexity.

 

Original
C
 **Example 1:** 

```
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4

```

 **Example 2:** 

```
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -104 < nums[i], target < 104
- All the integers in nums are unique.
- nums is sorted in ascending order.

## Solution

**Language:** C  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10 MB (beats 50.25%)  
**Submitted:** 2026-11-20T05:16:17.558Z  

```c
  int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        // Prevents potential integer overflow compared to (left + right) / 2
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; // Target found, return its index
        } else if (nums[mid] < target) {
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }

    return -1; // Target does not exist in the array
}  
    

```

---

[View on LeetCode](https://leetcode.com/problems/binary-search/)