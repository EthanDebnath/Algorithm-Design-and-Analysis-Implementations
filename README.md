# Algorithm-Design-and-Analysis-Implementations

# Hands On 8
Tasks:

1. Leverage your implementation of quicksort to implement the ith order statistic. Demonstrate it's working via an example. Upload your code to github.

2. Implement and upload your source code to github for: stack, queue, and singly linked list. Make sure to implement the same functionality (api/interface) as the ones from the book.  *Restriction*: Use fixed sized arrays (C style arrays) and assume only integers (C style int) for the data to store.

## Table of Contents
- [Overview](#overview)
- [Implemented Features](#implemented-features)
  - [1. ith Order Statistic using QuickSort](#1-ith-order-statistic-using-quicksort)
  - [2. Stack](#2-stack)
  - [3. Queue](#3-queue)
  - [4. Singly Linked List](#4-singly-linked-list)
- [Usage](#usage)
- [How to Compile and Run](#how-to-compile-and-run)
- [Contributing](#contributing)
- [License](#license)

## Overview

This project includes the implementation of key data structures and algorithms, particularly focusing on:

1. **Finding the ith Order Statistic using a modified QuickSort**: This algorithm efficiently finds the ith smallest element in an unsorted list using a partition-based approach, similar to QuickSort.

2. **Basic Data Structures**:
    - Stack (implemented with a fixed-size array)
    - Queue (implemented with a fixed-size array)
    - Singly Linked List (simulated with arrays to store data and next element references)

### Language:
- **C++** for stack, queue, and singly linked list.
- **Python** for the ith order statistic using QuickSort.

---

## Implemented Features

### 1. ith Order Statistic using QuickSort

- **Description**: This algorithm finds the ith smallest element in an unsorted array. It utilizes a modified partition process of QuickSort to avoid fully sorting the array.
- **Language**: Python
- **Example**:
  ```python
  arr = [12, 3, 5, 7, 4, 19, 26]
  i = 3  # Finding the 3rd smallest element
  result = ith_order_statistic(arr, 0, len(arr) - 1, i)
  print(result)  # Output: 5
