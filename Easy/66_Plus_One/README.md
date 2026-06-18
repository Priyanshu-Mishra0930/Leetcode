# 66. Plus One

## Problem

You are given a large integer represented as an integer array `digits`, where each element is a digit.

Increment the integer by one and return the resulting array of digits.

## Approach

Starting from the last digit:

1. Traverse the array from right to left.
2. If the current digit is less than `9`:
   - Increment it by `1`.
   - Return the modified array immediately.
3. If the digit is `9`:
   - Set it to `0` and continue to the next digit.
4. If all digits become `0` after traversal (e.g., `999`):
   - Create a new array of size `digitsSize + 1`.
   - Set the first element to `1`.
   - Fill the remaining positions with `0`.
   - Return the new array.

## Example

Input:
[1,2,3]

Output:
[1,2,4]

---

Input:
[4,3,2,1]

Output:
[4,3,2,2]

---

Input:
[9,9,9]

Output:
[1,0,0,0]

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(1) for normal cases, O(n) when a new array is required.