# 📚 Arrays in C++ - Basics

This folder contains my beginner-level programs for understanding how arrays work in C++.

## 🎯 Objective

The goal of these programs is to learn:

* What an array is
* How arrays are stored in memory
* Declaration and initialization of arrays
* Accessing elements using indexes
* Working with 2D arrays
* Increasing array size dynamically using pointers

---

## 📂 Files

### 1️⃣ declaration_initialisation.cpp

Concepts covered:

* Array declaration
* Array initialization
* Accessing array elements
* Understanding indexes

Example:

```cpp
int arr[5] = {10,20,30,40,50};
```

---

### 2️⃣ array.cpp

Concepts covered:

* Creating arrays
* Traversing arrays
* Displaying elements using loops

Example:

```cpp
for(int i=0;i<5;i++)
{
    cout<<arr[i];
}
```

---

### 3️⃣ twoD.cpp

Concepts covered:

* Two-dimensional arrays
* Rows and columns
* Nested loops

Example:

```cpp
int arr[2][3];
```

Visual representation:

```text
1 2 3
4 5 6
```

---

### 4️⃣ increase_size.cpp

Concepts covered:

* Dynamic memory allocation
* Increasing array size
* Copying old elements to a new array
* Deleting unused memory

Example:

```cpp
int *p = new int[5];
int *q = new int[10];
```

---

## 🧠 Topics Learned

✔ Array Declaration

✔ Array Initialization

✔ Array Traversal

✔ Array Indexing

✔ 2D Arrays

✔ Dynamic Arrays

✔ Memory Management using Pointers

---

## 🚀 Future Topics

* Append
* Insert
* Delete
* Linear Search
* Binary Search
* Reverse Array
* Shift and Rotate
* Array ADT
* STL Vector

---

## 👨‍💻 Author

Mohit Kunwar

B.Tech CSE (AI & ML)

Learning Data Structures and Algorithms using C++.
