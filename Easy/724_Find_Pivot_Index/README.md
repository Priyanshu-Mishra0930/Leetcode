# 724. Find Pivot Index

## Approach

Find the index where the sum of all elements to the left is equal to the sum of all elements to the right.

* First, calculate the total sum of the array.

* Initialize a variable `leftSum = 0`.

* Traverse the array from left to right.

* For each index `i`, calculate the right sum as:

  `rightSum = totalSum - leftSum - nums[i]`

* If `leftSum` is equal to `rightSum`, return the current index `i`.

* Otherwise, add `nums[i]` to `leftSum` and continue.

* If no pivot index is found after the traversal, return `-1`.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## Key Idea

Compute the total sum once and maintain a running left sum. The right sum can be derived instantly using the formula:

`rightSum = totalSum - leftSum - nums[i]`

This avoids repeated summation and allows the pivot index to be found efficiently in linear time.
