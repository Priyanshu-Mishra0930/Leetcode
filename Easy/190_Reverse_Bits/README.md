# 190. Reverse Bits

## Approach

The number is treated as a 32-bit integer.

* Store each bit of the number in an array by repeatedly taking the remainder when divided by 2.
* This stores the bits from least significant to most significant.
* Reconstruct the number by traversing the stored bits in reverse order.
* Multiply each bit by its corresponding power of 2 and add it to the result.
* The final value represents the integer with all bits reversed.

## Complexity

* Time Complexity: O(32) ≈ O(1)
* Space Complexity: O(32) ≈ O(1)

## Key Idea

Store the 32 bits of the number and rebuild the integer by reading those bits in reverse order. Since the problem always uses exactly 32 bits, leading zeros are also included in the reversal.
