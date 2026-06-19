# 875. Koko Eating Bananas

## Approach

Use Binary Search on the eating speed.

- The minimum possible speed is `1`.
- The maximum possible speed is the largest pile.
- For a given speed `k`, calculate the total hours required to eat all bananas.
- If the required hours are greater than `h`, increase the speed.
- Otherwise, try a smaller speed and store the current answer.
- Continue until the minimum valid speed is found.

The hours needed for a pile are calculated using:

ceil(pile / k)

which is implemented as:

(pile + k - 1) / k

## Complexity

- Time: O(n log m)
- Space: O(1)

where:
- `n` = number of piles
- `m` = maximum pile size