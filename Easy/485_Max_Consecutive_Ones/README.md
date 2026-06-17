# 485. Max Consecutive Ones

## Approach

Find the maximum number of consecutive `1`s in the binary array.

* Initialize two variables:
  * `temp` to store the current count of consecutive `1`s.
  * `ret` to store the maximum count found so far.

* Traverse the array from left to right.

* If the current element is `1`:
  * Increment `temp`.
  * Update `ret` if `temp` becomes greater than the current maximum.

* If the current element is `0`:
  * Reset `temp` to `0` because the consecutive sequence is broken.

* After completing the traversal, return `ret`.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## Key Idea

Keep track of the current streak of consecutive `1`s while traversing the array. Whenever a `0` is encountered, reset the streak. Continuously update the maximum streak length found.

This allows the answer to be computed in a single pass without using any extra space.