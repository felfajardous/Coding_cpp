# Introduction to Arrays 📦📦📦

An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.

For arrays of a known size, `10` in this case, use the following declaration:

```cpp
int arr[10]; // Declares an array named arr of size 10, i.e., you can store 10 integers.
```

**Note:** Unlike C, C++ allows dynamic allocation of arrays at runtime without special calls like `malloc()`. If `n = 10`, `int arr[n]` will create an array with space for `10` integers.

## Accessing Elements of an Array

Indexing in arrays starts from `0`. So the first element is stored at `arr[0]`, the second element at `arr[1]`, and so on through `arr[9]`.

You will be given an array of `N` integers and you have to print the integers in reverse order.

## Input Format

The first line of the input contains `N`, where `N` is the number of integers. The next line contains `N` space-separated integers.

## Constraints

```
1 ≤ N ≤ 1000
1 ≤ A[i] ≤ 1000
```

where `A[i]` is the `i`-th integer in the array.

## Output Format

Print the `N` integers of the array in reverse order, space-separated on a single line.

## Sample Input

```
4  
1 4 3 2
```

## Sample Output

```
2 3 4 1
```

