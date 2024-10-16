import random

# Partition function used in quicksort
def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

# Function to find ith order statistic
def ith_order_statistic(arr, low, high, i):
    if low == high:
        return arr[low]

    # Select a random pivot and partition the array
    pivot_index = partition(arr, low, high)

    # Find the rank of the pivot
    k = pivot_index - low + 1

    # If the pivot is the ith element
    if i == k:
        return arr[pivot_index]
    elif i < k:
        # If ith element is on the left side of the pivot
        return ith_order_statistic(arr, low, pivot_index - 1, i)
    else:
        # If ith element is on the right side of the pivot
        return ith_order_statistic(arr, pivot_index + 1, high, i - k)

# Example to demonstrate
arr = [12, 3, 5, 7, 4, 19, 26]
i = 3  # Find the 3rd smallest element
result = ith_order_statistic(arr, 0, len(arr) - 1, i)
print(f"The {i}rd smallest element is {result}")
