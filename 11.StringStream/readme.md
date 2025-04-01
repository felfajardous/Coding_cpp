# StringStream  🔢 ➡️ 1️⃣ 2️⃣ 3️⃣ 4️⃣ 

## Introduction
In this challenge, we work with `stringstream` in C++.

`stringstream` is a stream class used to operate on strings. It allows input/output operations on memory-based string streams. This class is particularly useful for parsing different types of data. 

### Commonly Used Operators and Methods
- **Operator `>>`**: Extracts formatted data.
- **Operator `<<`**: Inserts formatted data.
- **Method `str()`**: Gets the contents of the underlying string device object.
- **Method `str(string)`**: Sets the contents of the underlying string device object.

Its header file is `#include <sstream>`.

## Parsing Comma-Separated Integers
One common use of `stringstream` is to parse comma-separated integers from a string (e.g., `"23,4,56"`).

### Example
```cpp
#include <sstream>
#include <iostream>
using namespace std;

int main() {
    string input = "23,4,56";
    stringstream ss(input);
    char ch;
    int a, b, c;
    
    ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
    
    cout << a << endl << b << endl << c << endl;
    return 0;
}
```
Here, `ch` is a temporary storage variable used to discard the commas.

## Function Description

Complete the `parseInts` function in the editor below.

### Function Signature
```cpp
vector<int> parseInts(string str);
```

### Parameters
- `string str`: A string of comma-separated integers.

### Returns
- `vector<int>`: A vector containing the parsed integers.

> **Note:** You can learn to push elements onto a vector by solving the first problem in the STL chapter.

## Input Format
A single line containing integers separated by commas.

## Constraints
- The length of the input string is less than an upper bound (to be defined as per requirements).

## Sample Input
```
23,4,56
```

## Sample Output
```
23
4
56
```

This approach makes it easy to parse formatted data from strings using `stringstream` in C++.

## Raw Code to Complete
Below is the base code that needs to be completed as part of the activity:

```cpp
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    
    return numbers_array;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
```

