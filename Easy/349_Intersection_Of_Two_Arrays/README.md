# 349. Intersection of Two Arrays

## Approach

A frequency table is used to track the elements present in the first array.

* Traverse `nums1` and mark each element in a hash table.
* Traverse `nums2` and check whether the current element exists in the hash table.
* If it exists, add it to the result array.
* Set its frequency to `0` after adding it to ensure uniqueness.
* Return the resulting array containing common elements.

## Complexity

* Time Complexity: O(n + m)
* Space Complexity: O(1001) ≈ O(1)

where:

* n = size of `nums1`
* m = size of `nums2`

## Key Idea

Since the constraints guarantee that values are in the range `0` to `1000`, a fixed-size frequency table can be used instead of a hash set. After adding an element to the result, its frequency is reset to `0` to avoid duplicates in the final intersection array.
