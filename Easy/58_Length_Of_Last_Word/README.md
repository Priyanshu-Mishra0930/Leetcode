# LeetCode 58 - Length of Last Word

## Approach

Traverse the string from right to left.

- Skip trailing spaces.
- Count characters of the first word encountered.
- Stop when a space or the beginning of the string is reached.
- Return the count.

## Complexity

- Time: O(n)
- Space: O(1)