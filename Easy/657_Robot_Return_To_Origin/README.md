# 657. Robot Return to Origin

## Approach

Count the occurrences of each move (`U`, `D`, `L`, `R`) using an array.

The robot returns to the origin if:

- `U == D`
- `L == R`

Return `true` when both conditions are satisfied; otherwise return `false`.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Concepts Used

- Arrays
- String Traversal
- Counting