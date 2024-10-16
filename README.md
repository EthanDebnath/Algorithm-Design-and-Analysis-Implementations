# Algorithm-Design-and-Analysis-Implementations
# Creating the README.md file content based on the provided structure

# Algorithm Design and Analysis Implementations

This repository contains the implementation of various data structures and algorithms as part of the **Design and Analysis of Algorithms** course. The goal of this project is to provide efficient solutions to fundamental problems using C-style fixed-size arrays and demonstrate the application of algorithms like QuickSort and data structures such as Stack, Queue, and Singly Linked List.

## Table of Contents
- [Project Overview](#project-overview)
- [Implemented Features](#implemented-features)
  - [1. ith Order Statistic using QuickSort](#1-ith-order-statistic-using-quicksort)
  - [2. Stack](#2-stack)
  - [3. Queue](#3-queue)
  - [4. Singly Linked List](#4-singly-linked-list)
- [Usage](#usage)
- [How to Compile and Run](#how-to-compile-and-run)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

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
