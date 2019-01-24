# Max pairwise product
## Problem
Find the maximum product of two distinct numbers in a sequence of non-negative integers.

## Formalize problem
Input: A sequence of non-negative integers A = a₁, a₂, a₃ ⋅⋅⋅ aₙ


Output: argmax((aᵢ ⋅ aⱼ) ∀ {i, j ∈ (I × I) |i ≠ j) where I = {x ∈ ℕ |x < n}

## Problem instance
```
10
7 5 14 2 8 8 10 1 2 3
```

Output:
```
140
```
