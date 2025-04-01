# Classes in C++

## Overview

Classes in C++ are user-defined types declared with the `class` keyword that contain data members and member functions. While classes and structures (`struct`) offer similar functionality, there are key differences:
- **Class members are private by default**.
- **Struct members are public by default**.

Classes allow encapsulation of data and provide methods to manipulate/access them, forming the foundation of Object-Oriented Programming (OOP).

### Access Specifiers
Access specifiers define the visibility of class members:
- **public**: Accessible from anywhere in the code.
- **private**: Accessible only within the class.

### Class Structure
A class can be structured as follows:

```cpp
class ClassName {
    access_specifier1:
        type1 val1;
        type2 val2;
        ret_type1 method1(type_arg1 arg1, type_arg2 arg2,...);
    
    access_specifier2:
        type3 val3;
        type4 val4;
        ret_type2 method2(type_arg3 arg3, type_arg4 arg4,...);
};
```

### Encapsulation Example
It is common practice to keep variables **private** and provide **public** getter and setter methods:

```cpp
class SampleClass {
    private:
        int val;
    public:
        void set(int a) {
            val = a;
        }
        int get() {
            return val;
        }
};
```

## Task Description
You need to create a class named `Student`, which stores the following details:
- `age` (int)
- `first_name` (string)
- `last_name` (string)
- `standard` (int)

### Required Methods
The class should have the following **getter and setter** methods:
- `get_age()`, `set_age(int)`
- `get_first_name()`, `set_first_name(string)`
- `get_last_name()`, `set_last_name(string)`
- `get_standard()`, `set_standard(int)`
- `to_string()`: Returns a comma-separated string of the student’s details.

### Input Format
The input consists of four lines:
1. Integer representing `age`
2. String representing `first_name` (lowercase Latin letters)
3. String representing `last_name` (lowercase Latin letters)
4. Integer representing `standard`

**Note:** `first_name` and `last_name` will not exceed 50 characters.

### Output Format
The program should:
1. Print the `age` on the first line.
2. Print `last_name, first_name` on the second line.
3. Print `standard` on the third line.
4. Print a blank line.
5. Print the comma-separated student details from `to_string()`.

### Sample Input
```
15
john
carmack
10
```

### Sample Output
```
15
carmack, john
10

15,john,carmack,10
```

---

## Skeleton Code
Use the following **skeleton code** as a starting point:

```cpp
#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
