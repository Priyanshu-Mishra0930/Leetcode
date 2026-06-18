# LeetCode 202 - Happy Number

## Approach

- Compute the sum of the squares of digits repeatedly.
- If the number becomes `1`, it is happy.
- If the number becomes `4`, it will enter a cycle and can never reach `1`.
- Continue until either `1` or `4` is reached.

## Complexity

- Time: O(log n)
- Space: O(1)