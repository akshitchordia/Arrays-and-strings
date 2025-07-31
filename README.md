# 🧩 Arrays & Strings in C++

## 🎯 Objective  
To explore the use of arrays and strings in C++, understand how they are structured in memory, and apply basic operations and algorithms for effective data handling.

---

## 📖 Overview

### 🧵 Arrays
An **array** is a fixed-size collection of elements that share the same data type, stored sequentially in memory. Each value is accessed using an index starting from 0.

- Size is set during declaration  
- Stores same type of elements  
- Fast access using index positions  

### 🧵 Strings
A **string** is essentially a group of characters that ends with a special null character (`'\0'`). C++ provides two major types:

- **Character arrays (C-strings)** — Low-level representation  
- **`std::string` class** — Provides built-in methods and safer usage  

---

## 🔧 Core Operations

| Feature        | Arrays                                | Strings                                |
|----------------|----------------------------------------|-----------------------------------------|
| Iteration      | Loops like `for` or `while`            | Loops or string functions               |
| Searching      | Linear/Binary Search                   | Functions like `find()`, `compare()`    |
| Updates        | Access by index                        | Modify using position or methods        |
| Joining        | Manual index copying                   | `+` operator, `append()` method         |
| Sorting        | Use `sort()` or manual logic           | Sort characters or string lists         |

---

## 🛠️ Tips for Cleaner Code

- ✅ Never access arrays outside their limits to avoid runtime errors.  
- ✅ Stick to `std::string` when working with text for better safety and features.  
- ✅ Use references or pointers when passing large arrays or strings to functions.  
- ✅ Use STL functions from `<algorithm>` to write faster and cleaner code.  
- ✅ For flexible collections, prefer `std::vector` over raw arrays.

---

## 🧾 Sample Algorithms

### 🔹 Sum and Average of Elements

1. **Begin**  
2. Define `n = 6`  
3. Declare array:  
   `marks[n] = {100, 200, 300, 400, 500, 600}`  
4. Set a `key = 400` to locate  
5. Initialize `sum = 0`, `average`  
6. Loop `i = 0 to n-1`:  
   - If `marks[i] == key`, display index  
7. Loop again to add elements to `sum`  
8. Calculate average = `sum / n`  
9. Show results  
10. **End**

---

### 🔹 Largest Value in Array

1. **Start**  
2. Input size and array `arr[]`  
3. Initialize `max = arr[0]`  
4. Traverse from index 1 to `n-1`:  
   - If `arr[i] > max`, update `max`  
5. Output the maximum value  
6. **Finish**

---

### 🔹 Reversing a String (Without STL reverse)

1. **Start**  
2. Take input into `str1`  
3. Get length `n = str1.length()`  
4. Print characters from `n-1` to `0`  
5. **End**

---

### 🔹 Palindrome String Checker

1. **Start**  
2. Accept input in `a`, create empty `revstr`  
3. Loop from `a.length() - 1` down to 0:  
   - Add each character to `revstr`  
4. If `a == revstr`, it’s a palindrome  
   - Else, it's not  
5. **End**

---

## 🧠 Wrap-Up

Arrays and strings are foundational tools in C++. By learning how to store, access, and manipulate them, developers can solve a wide range of computational problems. Whether you're summing values, searching, reversing, or checking for palindromes—understanding memory layout, indexing, and best practices will help you write clean and efficient code. Emphasizing modern approaches like `std::string` and STL algorithms leads to safer and more maintainable programs.
