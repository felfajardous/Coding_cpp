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




