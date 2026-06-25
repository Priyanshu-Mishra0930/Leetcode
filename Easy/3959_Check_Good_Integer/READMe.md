# 3908. Valid Digit Number

## Approach

Compute both the **sum of digits** and the **sum of the squares of digits** while traversing the number.

- Extract each digit using modulo (`% 10`).
- Add the digit to the digit sum.
- Add the square of the digit to the squared digit sum.
- Remove the last digit using integer division (`/ 10`).
- After processing all digits, check whether `(sum of squared digits - sum of digits) >= 50`.

## Complexity

- Time Complexity: O(d)
- Space Complexity: O(1)

Where `d` is the number of digits in `n`.

## Key Idea

Traverse the digits once while maintaining two running sums. The number is considered good if the difference between the sum of squared digits and the sum of digits is at least `50`.