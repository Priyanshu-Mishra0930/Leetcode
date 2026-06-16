# 1480. Running Sum of 1d Array

## Approach

Compute the running sum of the array by maintaining a cumulative total.

* Initialize a variable `sum = 0`.
* Traverse the array from left to right.
* Add the current element to `sum`.
* Replace the current element with the updated `sum`.
* Continue until all elements are processed.
* Set `returnSize` to `numsSize` and return the modified array.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## Key Idea

Maintain a cumulative sum while traversing the array and update each element in-place with the sum of all elements seen so far. This avoids using any extra array and achieves constant space complexity.
