# LeetCode 20 - Valid Parentheses

## Approach

Use a stack to track opening brackets.

- Push `(`, `{`, `[` onto the stack.
- For every closing bracket:
  - Check if the stack is empty.
  - Verify that the top element matches the corresponding opening bracket.
  - Pop if matched; otherwise return false.
- At the end, the stack must be empty for the string to be valid.

## Complexity

- Time: O(n)
- Space: O(n)