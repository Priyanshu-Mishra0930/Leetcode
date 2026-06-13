# 3816. Minimum Capacity Box

## Approach

Find the box with the minimum capacity that can store the item.

- Traverse all boxes.
- For each box, calculate the extra capacity after storing the item:
  
  `capacity[i] - itemSize`

- Consider only boxes where the extra capacity is non-negative.
- Keep track of the smallest valid extra capacity and its index.
- Return the corresponding index.
- If no box can store the item, return `-1`.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

## Key Idea

Among all boxes that can store the item, choose the one with the least unused capacity. If multiple boxes have the same minimum valid capacity, the first occurrence is selected.