# 3884. First Matching Character From Both Ends

## Approach

Use two mirrored positions in the string.

- Traverse the string from left to right.
- For each index `i`, compare `s[i]` with its corresponding character from the end, `s[n - i - 1]`.
- Return the first index where both characters are equal.
- If no matching pair exists, return `-1`.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

## Key Idea

Compare each character with its mirror position from the opposite end of the string and return the earliest matching index.