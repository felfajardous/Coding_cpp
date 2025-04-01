# String Manipulation in C++ 🔤

## Introduction
C++ provides a convenient data type called `string` for manipulating text-based data. This `string` class comes with various useful functionalities, including:

### Declaration
```cpp
string a = "abc";
```

### Getting the Length of a String
```cpp
int len = a.size();
```

### Concatenating Two Strings
```cpp
string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef"
```

### Accessing and Modifying Characters in a String
```cpp
string s = "abc";
char c0 = s[0];   // c0 = 'a'
char c1 = s[1];   // c1 = 'b'
char c2 = s[2];   // c2 = 'c'

s[0] = 'z';       // s = "zbc"
```

### Input and Output Using `cin` and `cout`
In this exercise, we will use `cin` to read input strings and `cout` to print output.

## Problem Statement
You are given two strings, *a* and *b*, separated by a newline. Each string consists of lowercase Latin characters ('a' to 'z').

### Task
1. Print the lengths of *a* and *b* as two space-separated integers.
2. Print the concatenation of *a* and *b*.
3. Swap the first characters of *a* and *b*, then print them separated by a space.

## Input Format
- A single line containing string *a*.
- A second line containing string *b*.

## Output Format
- First line: Two space-separated integers representing the lengths of *a* and *b*.
- Second line: The concatenated string (*a* + *b*).
- Third line: The modified versions of *a* and *b* with their first characters swapped.

## Constraints
- `1 ≤ |a|, |b| ≤ 100`
- `a` and `b` contain only lowercase English letters.

## Sample Input
```
abcd
ef
```

## Sample Output
```
4 2
abcdef
ebcd af
```

## Explanation
- `a = "abcd"`, `b = "ef"`
- `|a| = 4`, `|b| = 2`
- Concatenation: `a + b = "abcdef"`
- Swapped first characters: `a' = "ebcd"`, `b' = "af"`

## Raw Code to Complete
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program      
    return 0;
}
```

