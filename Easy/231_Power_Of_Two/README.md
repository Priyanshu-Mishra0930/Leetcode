# LeetCode 231 - Power of Two

## Approach

- A power of two has exactly one set bit in its binary representation.
- For such numbers, `n & (n - 1)` removes the only set bit and becomes `0`.
- Check that `n` is positive and `(n & (n - 1)) == 0`.

## Complexity

- Time: O(1)
- Space: O(1)