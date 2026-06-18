# LeetCode 28 - Find the Index of the First Occurrence in a String

## Approach

Check every possible starting position in `haystack`.

- Create a substring of length `needle`.
- Compare it with `needle`.
- Return the index when a match is found.
- Return `-1` if no occurrence exists.

## Complexity

- Time: O((m - n + 1) × n)
- Space: O(n)