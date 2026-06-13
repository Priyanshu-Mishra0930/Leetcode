# 35. Search Insert Position

## Approach

The array is sorted, so Binary Search is used.

- Initialize two pointers: `start` and `end`.
- Find the middle element.
- If the middle element equals the target, return its index.
- If the target is smaller, search in the left half.
- If the target is greater, search in the right half.
- If the target is not found, the `start` pointer will indicate the correct insertion position.

## Complexity

- Time Complexity: O(log n)
- Space Complexity: O(1)

## Key Idea

When Binary Search ends without finding the target, `start` points to the position where the target should be inserted while maintaining the sorted order.