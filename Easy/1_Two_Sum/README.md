# 1. Two Sum

## Approach

For each element, calculate the required complement:

complement = target - nums[i]

Search the remaining array for the complement.
If found, return both indices.

## Complexity

- Time Complexity: O(n²)
- Space Complexity: O(1)