# Max pairwise product
## Problem
Find the maximum product of two distinct numbers in a sequence of non-negative integers.

## Formalize problem
Input: A sequence of non-negative integers A = a₁, a₂, a₃ ⋅⋅⋅ aₙ

Output:
Let the set of indices 𝐼 = {𝑥 ∈ ℕ | 𝑥 ≤ 𝑛}.<br/>
Let the set of pairwise indices 𝐾 = {(𝑖, 𝑗) ∈ 𝐼 × 𝐼 | 𝑖 ≠ 𝑗}.<br/>
Return 𝑚𝑎𝑥({(𝑎ᵢ ⋅ 𝑎ⱼ) | (𝑖, 𝑗) ∈ 𝐾)}).<br/>

## Problem instance
```
10
7 5 14 2 8 8 10 1 2 3
```

Output:
```
140
```
