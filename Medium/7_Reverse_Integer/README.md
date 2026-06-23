# Reverse Integer

### Approach
- Extract the last digit using `% 10`.
- Build the reversed number using `rev = rev * 10 + digit`.
- Use `long long` to safely detect overflow.
- Return `0` if the reversed number exceeds the 32-bit signed integer range.

### Complexity
- **Time Complexity:** `O(log₁₀ n)`
- **Space Complexity:** `O(1)`

### Key Idea
Reverse the number digit by digit while checking for overflow before returning the result.