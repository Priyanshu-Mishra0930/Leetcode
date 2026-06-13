# 3866. First Unique Even Element

## Approach

Use a frequency array to count the occurrences of all even numbers.

- Traverse the array and count only even numbers.
- Traverse the array again in its original order.
- Return the first number whose frequency is exactly `1`.
- If no such number exists, return `-1`.

This ensures that the earliest unique even element is returned.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

## Key Idea

Count frequencies first, then scan the original array to preserve the order of appearance.