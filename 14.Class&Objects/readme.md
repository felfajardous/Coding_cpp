# Classes & Objects 🌟🌍📚

In C++, a **class** defines a blueprint for an object. We use the same syntax to declare objects of a class as we use to declare variables of other basic types. For example:

```cpp
Box box1;  // Declares variable box1 of type Box
Box box2;  // Declares variable box2 of type Box
```

## Problem Statement

Kristen is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the **5** exams given during this semester.

### Task

Create a class named **Student** with the following specifications:

- An instance variable named `scores` to hold a student's exam scores.
- A **void** function `input()` that reads **5** integers and saves them to `scores`.
- An **int** function `calculateTotalScore()` that returns the sum of the student's scores.

## 👝 Input Format

Most of the input is handled for you by the locked code in the editor.

- In the `void Student::input()` function, you must read **5** scores from standard input and save them to your `scores` instance variable.

### Constraints

- `1 <= n <= 100`  *(Number of students)*
- `0 <= examscore <= 50 ` *(Score range per exam)*

## 📤 Output Format

- In the `int Student::calculateTotalScore()` function, you must return the student's total grade (the sum of the values in `scores`).
- The locked code in the editor will determine how many students scored higher than Kristen and print that number to the console.

## 📝 Example

### **Sample Input**
```
3  
30 40 45 10 10  
40 40 40 10 10  
50 20 30 10 10  
```

### **Sample Output**
```
1
```

### **Explanation**
Kristen's grades are on the first line of scores. Only **1** student scored higher than her.

---

## 🖨 Skeleton Code  

The following C++ code serves as a starting point for the activity. Complete the implementation of the **Student** class based on the problem statement.

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here

int main() {
    int n; // Number of students
    cin >> n;
    Student *s = new Student[n]; // An array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // Calculate Kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // Determine how many students scored higher than Kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // Print result
    cout << count;
    
    return 0;
}
```

---

### ✅ Notes:
- Follow **Object-Oriented Programming (OOP)** principles while designing the `Student` class.
- Ensure proper encapsulation and usage of class methods.
- Use **dynamic memory allocation** carefully and free memory if necessary.

---

This structure improves readability, adds clarity, and ensures proper formatting. Let me know if you need modifications! 🚀🔥

