# 876. Middle of the Linked List

## Approach 1: Count Nodes (Two Traversals)

### Idea

Count the total number of nodes in the linked list. Once the count is known, traverse the list again until the middle position (`count / 2`) and return that node.

### Algorithm

1. Traverse the linked list and count the total number of nodes.
2. Compute the middle index as `count / 2`.
3. Traverse the list again for `count / 2` steps.
4. Return the current node.

### Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

### Key Idea

The middle position can be determined after counting the total number of nodes. Although this requires two traversals, it is simple and easy to understand.

---

## Approach 2: Slow & Fast Pointer (Optimal)

### Idea

Use two pointers:

- **Slow Pointer** moves one node at a time.
- **Fast Pointer** moves two nodes at a time.

When the fast pointer reaches the end of the list, the slow pointer will automatically be at the middle node.

### Algorithm

1. Initialize both `slow` and `fast` pointers to the head.
2. Move:
   - `slow` by one node.
   - `fast` by two nodes.
3. Continue until `fast == nullptr` or `fast->next == nullptr`.
4. Return the `slow` pointer.

### Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

### Key Idea

Since the fast pointer moves twice as fast as the slow pointer, when it reaches the end of the list, the slow pointer reaches the middle. This approach finds the middle in a **single traversal**, making it the preferred interview solution.

---

## Comparison

| Feature | Count Method | Slow & Fast Pointer |
|----------|--------------|--------------------|
| Traversals | 2 | 1 |
| Time Complexity | O(n) | O(n) |
| Space Complexity | O(1) | O(1) |
| Easy to Understand | ✅ | Moderate |
| Interview Preferred | ❌ | ✅ |

---

## Conclusion

- Use the **Count Method** to build intuition and understand the problem.
- Use the **Slow & Fast Pointer** approach for interviews and production-quality code, as it solves the problem in a single traversal while maintaining constant extra space.