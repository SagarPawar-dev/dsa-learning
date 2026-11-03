# 🚀 DSA Learning Journey

Welcome to my **Data Structures & Algorithms (DSA)** repository! This repo serves as an organized log of my daily problem-solving, concepts, and algorithmic implementations in **C++**.

---

## 📂 Repository Structure

```text
├── basic concepts/
│   ├── basic maths/
│   │   ├── countDigits.cpp
│   │   ├── armstrong.cpp
│   │   └── prime.cpp
│   └── basic arrays/
│       └── sum.cpp
├── Recursion/
│   ├── 1-n.cpp
│   ├── n-1.cpp
│   ├── Print-Sagar.cpp
│   ├── sum-of-n.cpp
│   ├── factorial.cpp
│   ├── reverse-array.cpp
│   └── fibonacci.cpp
└── sorting/
    ├── selection.cpp
    ├── bubbleSort.cpp
    ├── insertion.cpp
    ├── mergeSort.cpp
    └── quickSort.cpp
```

---

## 🧠 Concepts & Topics Covered

### 1. 🔢 Basic Math Concepts
Essential number theory and digit-manipulation algorithms that build foundational problem-solving intuition:
- **Count Digits** — Extracting digits using modulo and division arithmetic ($\mathcal{O}(\log_{10} n)$).
- **Armstrong Number** — Checking if the sum of digits raised to the power of digit count equals the original number.
- **Prime Number Check** — Optimal primality testing running up to $\mathcal{O}(\sqrt{n})$.

### 2. 🔁 Recursion
Developing recursive thinking, call-stack tracing, and base-condition design:
- **Basic Tracing & Sequences** — Printing $1$ to $N$, $N$ to $1$, and custom sequences using forward and backtracking recursion.
- **Parameterized & Functional Recursion** — Sum of first $N$ numbers and Factorial calculation.
- **Array Operations via Recursion** — In-place array reversal using two-pointer recursion.
- **Multiple Recursive Calls** — Computing the $N$-th Fibonacci number ($F(n) = F(n-1) + F(n-2)$).

### 3. 📊 Sorting Algorithms
Comprehensive implementation of foundational and divide-and-conquer sorting algorithms from scratch:

| Algorithm | Best Case | Average Case | Worst Case | Space | Notes |
| :--- | :---: | :---: | :---: | :---: | :--- |
| **Selection Sort** | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(1)$ | Repeatedly finds minimum and swaps into place |
| **Bubble Sort** | $\mathcal{O}(n)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(1)$ | Optimized with `didSwap` early-exit flag |
| **Insertion Sort** | $\mathcal{O}(n)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(1)$ | Inserts elements into their correct sorted position |
| **Merge Sort** | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n)$ | Divide & conquer, stable, reliable |
| **Quick Sort** | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(1)$* | Partitioning around pivot (*$\mathcal{O}(\log n)$ call stack) |

---

## 🛠️ Tech Stack & Setup

- **Language:** C++ (C++17 standard)
- **Compiler:** GCC / `g++`
- **Environment:** Visual Studio Code on Linux

---

## 🎯 Next Goals
- [ ] Arrays (Fundamentals, Medium & Hard problems)
- [ ] Binary Search
- [ ] Strings & Hashing
- [ ] Linked Lists

---
*Maintained with consistency by [Sagar Pawar](https://github.com/SagarPawar-dev)*

