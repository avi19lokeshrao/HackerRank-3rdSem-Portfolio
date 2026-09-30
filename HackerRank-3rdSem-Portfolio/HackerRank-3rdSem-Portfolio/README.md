# HackerRank 3rd Sem Portfolio

**Activity 8: HackerRank Algorithmic Problem-Solving & Portfolio Integration**

This repository contains the five mandatory HackerRank solutions for the 3rd-semester CSE Activity 8.

## Student Information

- **Name:** [YOUR NAME]
- **Roll Number:** B25CS0311
- **HackerRank Profile:** [ADD YOUR PUBLIC HACKERRANK PROFILE URL]
- **GitHub Repository:** `HackerRank-3rdSem-Portfolio`
- **Language:** C++

## Problem Summary

| # | Problem | Technique | Time | Space |
|---|---|---|---|---|
| 1 | Diagonal Difference | Primary/secondary diagonal traversal | O(N) | O(1) auxiliary |
| 2 | Dynamic Array | Dynamic sequences + XOR indexing | O(N + Q) amortized | O(N) |
| 3 | Time Conversion | String parsing and 12/24-hour conversion | O(1) | O(1) |
| 4 | Compare the Triplets | Element-wise comparison | O(1) | O(1) |
| 5 | Sparse Arrays | Hash-map frequency counting | O(N + Q) expected | O(N) |

## Repository Structure

```text
HackerRank-3rdSem-Portfolio/
├── 01_Diagonal_Difference/
│   └── solution.cpp
├── 02_Dynamic_Array/
│   └── solution.cpp
├── 03_Time_Conversion/
│   └── solution.cpp
├── 04_Compare_the_Triplets/
│   └── solution.cpp
├── 05_Sparse_Arrays/
│   └── solution.cpp
└── README.md
```

## Problem Notes

### 1. Diagonal Difference
Traverse the matrix once. Add elements on the primary diagonal and secondary diagonal, then return the absolute difference.

### 2. Dynamic Array
Maintain `n` dynamic sequences. For each query, compute the target sequence using:
`(x ^ lastAnswer) % n`.
Type-1 queries append values; type-2 queries update `lastAnswer` and record it.

### 3. Time Conversion
Parse the hour and AM/PM suffix. Convert `12 AM` to `00`, and add 12 to PM hours except `12 PM`.

### 4. Compare the Triplets
Compare the three corresponding scores and increment Alice's or Bob's score when one value is greater.

### 5. Sparse Arrays
Build a frequency table with a hash map, then answer each query by looking up its frequency.

## HackerRank Evidence

Add screenshots here after completing the submissions:

1. Diagonal Difference — Accepted
2. Dynamic Array — Accepted
3. Time Conversion — Accepted
4. Compare the Triplets — Accepted
5. Sparse Arrays — Accepted
6. Required 3-Star Badge

## Reflection

The five problems demonstrate how choosing the appropriate data structure and limiting unnecessary work can improve algorithmic efficiency. Diagonal Difference shows that a matrix problem does not require repeated traversal: both diagonal sums can be accumulated in a single pass with constant auxiliary space. Dynamic Array introduces dynamic sequences and XOR-based indexing, while keeping the operations efficient. Time Conversion demonstrates that careful string parsing can solve a formatting problem in constant time. Compare the Triplets reinforces direct element-wise comparison and simple score tracking. Sparse Arrays demonstrates the benefit of frequency mapping: instead of scanning the complete string collection for every query, frequencies are calculated once and reused. Overall, the activity strengthened the connection between implementation and complexity analysis. It also emphasized writing clean, modular solutions that can be tested independently and documented clearly in a version-controlled repository. These techniques are useful beyond HackerRank because they provide a systematic way to identify repeated work, select suitable data structures, and reason about how an algorithm scales with its input size.
