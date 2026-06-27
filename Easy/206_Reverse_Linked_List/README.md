# LeetCode 206 - Reverse Linked List

## Approach

- Use three pointers: `prev`, `curr`, and `next`.
- Traverse the linked list one node at a time.
- Store the next node before changing the current node's link.
- Reverse the current node's `next` pointer to point to the previous node.
- Move `prev` and `curr` one step forward.
- After the traversal, `prev` points to the new head of the reversed list.

## Complexity

- Time: O(n)
- Space: O(1)