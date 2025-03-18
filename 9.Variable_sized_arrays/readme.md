## Variable Sized Arrays  🗂️...📦📦📦

Consider an `n`-element array, `a`, where each index in the array contains a reference to an array of `k_i` integers (where the value of `k_i` varies from array to array). See the Explanation section below for a diagram.

Given `a`, you must answer `q` queries. Each query is in the format `i j`, where `i` denotes an index in array `a` and `j` denotes an index in the array located at `a[i]`. For each query, find and print the value of element `j` in the array at location `a[i]` on a new line.

[📌 Link of interest](https://cplusplus.com/doc/tutorial/dynamic/) to learn more about how to create variable-sized arrays in C++.

---

### Input Format

- The first line contains two space-separated integers denoting the respective values of `n` (the number of variable-length arrays) and `q` (the number of queries).
- Each of the next `n` lines describes an array:
  
  ```
  k a[i]_0 a[i]_1 … a[i]_{k-1}
  ```
  
  where `k` is the number of elements in that array.
  
- The next `q` lines contain two space-separated integers, `i` and `j`, representing queries.

---

### Constraints

- `1 \leq n \leq 10^5`
- `1 \leq q \leq 10^5`
- `1 \leq k \leq 3 × 10^5`
- `n \leq \sum k \leq 3 × 10^5`
- `0 \leq i < n`
- `0 \leq j < k`
- All indices in this challenge are zero-based.
- All given numbers are non-negative and do not exceed `10^6`.

---

### Output Format

For each pair of `i` and `j` values (i.e., for each query), print a single integer that denotes the element located at index `j` of the array referenced by `a[i]`. There should be a total of `q` lines of output.

---

### Sample Input

```
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
```

### Sample Output

```
5
9
```

---

### Explanation

The arrays are structured as follows:

![Diagram](https://s3.amazonaws.com/hr-challenge-images/14507/1476906485-2c93045320-variable-length-arrays.png)

We perform `q = 2` queries:

1️⃣ **Query (0,1)**  
- Find the array at index `i = 0`: `[ 1, 5, 4 ]`  
- The element at index `j = 1` is **5**.

2️⃣ **Query (1,3)**  
- Find the array at index `i = 1`: `[ 1, 2, 8, 9, 3 ]`  
- The element at index `j = 3` is **9**.

---
# Practice case: Dynamic Array of Arrays in C++

In C++, you can create a dynamic 2D array (array of arrays) using `new` and deallocate it properly using `delete`. This allows flexibility when the array size is determined at runtime.

## Creating a Dynamic 2D Array
To create a dynamic array of arrays, follow these steps:
1. Allocate memory for an array of pointers.
2. Allocate memory for each row separately.

### Example:
```cpp
#include <iostream>

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows and columns: ";
    std::cin >> rows >> cols;

    // Step 1: Create an array of pointers
    int** arr = new int*[rows];

    // Step 2: Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    // Assign values and print the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = (i + 1) * (j + 1); // Example assignment
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Step 3: Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i]; // Delete each row
    }
    delete[] arr; // Delete the array of pointers

    return 0;
}
```

## Memory Deallocation
To prevent memory leaks, ensure that:
- Each row (`arr[i]`) is deleted first using `delete[] arr[i];`
- The array of pointers (`arr`) is deleted last using `delete[] arr;`

### Why is `delete` important?
Proper memory deallocation is crucial in C++ for the following reasons:
1. **Avoiding Memory Leaks:** When memory is allocated using `new`, it remains in the heap until explicitly freed. If `delete` is not used, the program will consume increasing amounts of memory, leading to degraded performance and potential crashes.
2. **Efficient Resource Management:** Freeing memory when it is no longer needed ensures that other processes or parts of the program can use it, improving system efficiency.
3. **Preventing Undefined Behavior:** Not freeing dynamically allocated memory can result in unexpected behavior, including program crashes or corrupt data.
4. **Best Practice in Large Applications:** In large-scale applications, improper memory management can cause serious issues, such as memory fragmentation, making debugging more difficult.

## Key Points
✅ Dynamic allocation allows flexibility in defining array sizes at runtime.
✅ Memory must be properly deallocated to avoid leaks.
✅ This approach provides better control than stack-based arrays but requires careful memory management.
✅ Using `delete` ensures efficient use of resources and prevents memory leaks, improving application stability.

By following this method, you can create and manage dynamic 2D arrays in C++ efficiently while ensuring proper memory handling.




