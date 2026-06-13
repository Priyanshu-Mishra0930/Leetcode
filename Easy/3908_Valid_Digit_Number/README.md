# 3908. Valid Digit Number

## Approach

Extract each digit of the number using modulo and division operations.

- Traverse all digits of the number.
- Count how many times the digit `x` appears.
- If `x` appears at least once and the number itself is not equal to `x`, return `true`.
- Otherwise, return `false`.

## Complexity

- Time Complexity: O(d)
- Space Complexity: O(1)

Where `d` is the number of digits in `n`.

## Key Idea

Use digit extraction (`% 10` and `/ 10`) to check whether the target digit appears in the number without converting the number to a string.