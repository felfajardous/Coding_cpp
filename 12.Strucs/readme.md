# Student Struct in C++ 📑

## Overview
A `struct` in C++ is a way to group multiple related fields into a single composite data structure. This concept is fundamental in Object-Oriented Programming as it helps organize related data under a single entity.

In this task, we will create a `struct` named `Student` that holds the following attributes:
- `age` (integer)
- `first_name` (string)
- `last_name` (string)
- `standard` (integer)

## Task
Implement the `Student` struct and use it to store and display student details.

## Input Format
- The input consists of four lines:
  1. An integer representing the student's age.
  2. A string representing the student's first name.
  3. A string representing the student's last name.
  4. An integer representing the student's standard.

## Output Format
- Print the student details in a single line, separated by spaces: `age first_name last_name standard`.

## Constraints
- The first name and last name will not exceed 50 characters.

## Example

### Sample Input
```
15
john
carmack
10
```

### Sample Output
```
15 john carmack 10
```

## Skeleton Code
```cpp
#include <cmath>
#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

// Define the struct here

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
```

## Notes
- The `struct` declaration must be placed before `main()`.
- The program reads input using `cin` and outputs using `cout`.
- This is a simple example demonstrating struct usage in C++.

