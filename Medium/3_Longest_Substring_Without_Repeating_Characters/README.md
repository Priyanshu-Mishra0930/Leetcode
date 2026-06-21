# 3. Longest Substring Without Repeating Characters

## Approach

Use a Sliding Window with two pointers.

- Expand the window using the right pointer.
- Store character frequencies in a hash table.
- If a duplicate character appears, shrink the window from the left until all characters are unique.
- Track the maximum window length throughout the process.

## Complexity

- Time: O(n)
- Space: O(1)