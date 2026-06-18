# 1929. Concatenation of Array

## Approach

Create a new array of size `2 * numsSize` and fill it by copying the original array twice.

- Set the return size to `2 * numsSize`.
- Allocate memory for the resulting array.
- Traverse the original array once.
- Store each element at:
  
  `ret[i] = nums[i]`

- Store the same element again in the second half:
  
  `ret[i + numsSize] = nums[i]`

- Return the newly created array.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(n)

## Key Idea

The result array consists of the original array followed immediately by another copy of the same array. By placing each element in both its original position and its corresponding position in the second half during a single traversal, the concatenated array can be built efficiently.