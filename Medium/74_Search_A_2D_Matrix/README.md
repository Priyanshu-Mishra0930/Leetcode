# Search a 2D Matrix

### Approach
- Iterate through each row of the matrix.
- Perform Binary Search on the current row.
- Return `true` if the target is found.
- If all rows are checked and target is not found, return `false`.

### Complexity
- **Time Complexity:** `O(m × log n)`
- **Space Complexity:** `O(1)`

### Key Idea
Use Binary Search on every row since each row is sorted.