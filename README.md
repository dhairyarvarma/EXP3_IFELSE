# 🧪 C++ Experiment 3: Implementing Conditional Decision-Making Statements

---

## 🎯 Aim

To:
1. Explore the functionality and syntax of decision-making statements in C++.
2. Use relational and logical operators to control the flow of execution based on user input.

---

## 🛠️ Tool Used

- Visual Studio Code (VS Code)

---

## 🎯 Objectives

- Apply conditional branching using `if`, `if-else`, and `else-if` constructs.
- Utilize relational operators (`==`, `!=`, `<`, `>`, `<=`, `>=`) for comparing values.
- Implement logical operators (`&&`, `||`, `!`) for combined condition evaluation.
- Write programs to:
  - Determine if a number is positive or negative.
  - Assign grades based on student performance.
  - Identify the location of a point in a 2D coordinate system.

---

## 📚 Theory

### 📌 Purpose of Conditional Statements

- Conditions enable a program to **make decisions at runtime**.
- They execute **specific blocks of code only when certain conditions are met**.
- Decision-making constructs make a program **dynamic, logical, and intelligent**.

---

### 🧩 Types of Conditional Constructs

#### ✅ 1. Simple If

- Checks a single condition.
- Executes only if the condition is true.

```cpp
if (temperature > 30) {
    cout << "It's hot outside.";
}
```
### ✅ 2. If-Else

Provides an alternative path of execution when the condition is false.

```cpp
if (number % 2 == 0) {
    cout << "Even number";
} else {
    cout << "Odd number";
}
```
### ✅ 3. Nested If-Else

The nested `if-else` structure allows conditions to be evaluated within other conditions. It’s useful for handling multiple, layered decisions.

```cpp
int a, b;
cout << "Enter two numbers: ";
cin >> a >> b;

if (a > 0) {
    if (b > 0) {
        cout << "Both a and b are positive.";
    } else {
        cout << "a is positive, but b is not.";
    }
} else {
    cout << "a is not positive.";
}
```
---

### 🔗 Relational Operators

Relational operators are used to compare two values or expressions. They return `true` or `false` based on the condition.

| Operator | Description              | Example     | Result             |
|----------|--------------------------|-------------|--------------------|
| `==`     | Equal to                 | `a == b`    | true if a equals b |
| `!=`     | Not equal to             | `a != b`    | true if a ≠ b      |
| `>`      | Greater than             | `a > b`     | true if a > b      |
| `<`      | Less than                | `a < b`     | true if a < b      |
| `>=`     | Greater than or equal to | `a >= b`    | true if a ≥ b      |
| `<=`     | Less than or equal to    | `a <= b`    | true if a ≤ b      |

---

### 🔗 Logical Operators

Logical operators are used to combine multiple relational or boolean expressions.

| Operator | Name         | Example            | Description                                      |
|----------|--------------|--------------------|--------------------------------------------------|
| `&&`     | Logical AND  | `x > 0 && y > 0`    | True if **both** conditions are true             |
| `||`     | Logical OR   | `x > 0 || y > 0`    | True if **at least one** condition is true       |
| `!`      | Logical NOT  | `!(x > 0)`          | True if the condition inside is **false**        |

---

## 🖥️ Program Summary

This experiment involves writing multiple C++ programs that demonstrate how conditional statements guide program flow based on different user inputs.

---

### 💡 Code Flow

- The program uses `cin` to accept input from the user.
- Variables are used to store input such as numbers, marks, or coordinates.
- Logical and relational operators are used to evaluate conditions.
- Based on the result, specific blocks of code are executed using `if`, `if-else`, or `else-if` statements.
- Outputs are displayed using `cout`.

---

### 📌 Use Cases Covered

#### 1. ✅ Number Sign Check

Determines whether a given number is positive, negative, or zero.

```cpp
if (n > 0) {
    cout << "Positive";
} else if (n < 0) {
    cout << "Negative";
} else {
    cout << "Zero";
}
```
---

### 🎓 Student Grading System

This program calculates the average percentage from five subject marks and assigns a grade based on the computed percentage.

#### 📌 Logic:
- Read marks for 5 subjects using `cin`.
- Compute the average using `(s1 + s2 + s3 + s4 + s5) / 5.0`.
- Use an `if-else if` ladder to determine the grade.

```cpp
#include <iostream>
using namespace std;

int main() {
    float s1, s2, s3, s4, s5, percent;
    
    cout << "Enter marks in 5 subjects out of 100:\n";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    percent = (s1 + s2 + s3 + s4 + s5) / 5.0;

    cout << "Percentage: " << percent << "%" << endl;

    if (percent >= 90)
        cout << "Grade: O";
    else if (percent >= 80)
        cout << "Grade: A+";
    else if (percent >= 70)
        cout << "Grade: A";
    else if (percent >= 60)
        cout << "Grade: B";
    else if (percent >= 50)
        cout << "Grade: C";
    else
        cout << "Grade: F";

    return 0;
}
```
---

### 📍 Quadrant Checker

This program accepts X and Y coordinates of a point and determines its position in the Cartesian plane.

#### 📌 Logic:
- Accept two float or integer inputs: `x` and `y`.
- Use nested `if-else` statements to identify the quadrant or axis.

```cpp
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter X and Y coordinates: ";
    cin >> x >> y;

    if (x == 0 && y == 0) {
        cout << "The point lies at the Origin.";
    } else if (x > 0 && y > 0) {
        cout << "The point lies in the First Quadrant.";
    } else if (x < 0 && y > 0) {
        cout << "The point lies in the Second Quadrant.";
    } else if (x < 0 && y < 0) {
        cout << "The point lies in the Third Quadrant.";
    } else if (x > 0 && y < 0) {
        cout << "The point lies in the Fourth Quadrant.";
    } else if (x == 0) {
        cout << "The point lies on the Y-axis.";
    } else {
        cout << "The point lies on the X-axis.";
    }

    return 0;
}
```

---

## 🧾 Sample Output

---

### ✅ Output – Number Sign
```cpp
Enter two numbers: 12 -8
Number 1 is positive
Number 2 is negative

```
---

### ✅ Output – Grade Assignment
```cpp
Enter marks in 5 subjects out of 100:
88 76 92 85 90
Percentage: 86.2%
You received A+ grade.
```


---

### ✅ Output – Coordinate Quadrant
```cpp
Enter coordinates (x y): 0 0
Point lies at the Origin

Enter coordinates (x y): 4 -5
Fourth Quadrant

```
---

## ✅ Conclusion

Through this experiment, we effectively demonstrated the use of conditional statements in C++ to make decisions based on user input.

- We explored simple `if`, `if-else`, and nested `if-else` structures.
- We applied **relational** and **logical operators** to compare values and evaluate complex conditions.
- Programs like sign checking, grade calculation, and quadrant identification showcased practical applications of decision-making constructs.

This foundational understanding of conditional logic is essential for progressing into more advanced topics such as loops, switch-case statements, and error handling in C++.

---
