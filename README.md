# 🧩 CPP07 — C++ Templates

Exploring generic programming with templates and writing flexible, reusable code.

Welcome to **CPP07**, the eighth module of the 42 C++ Modules, focused on **templates** in C++. This module introduces generic programming, allowing you to write functions and classes that work with any data type while maintaining type safety and efficiency.

---

## 🚀 Project Overview

CPP07 emphasizes:

* Function templates
* Class templates
* Writing generic and reusable code
* Type independence and flexibility
* Template instantiation
* Avoiding code duplication

This module helps you understand how C++ achieves abstraction without sacrificing performance, making your code more adaptable and scalable.

---

## 📘 Exercises Overview

### ex00 — Start with a few functions

Implement the following function templates:

* `swap` — swaps two values
* `min` — returns the smaller value
* `max` — returns the larger value

These functions must work with any type that supports comparison operators.

---

### ex01 — Iter

Implement a function template:

* `iter`

This function takes:

* An array
* Its length
* A function to apply to each element

Apply the given function to every element of the array, demonstrating template flexibility.

---

### ex02 — Array

Create a class template `Array` that:

* Stores elements of any type
* Supports indexing via `operator[]`
* Throws an exception for out-of-bounds access
* Implements deep copy (copy constructor and assignment operator)

This exercise reinforces memory management and template class design.

---

## 🧠 Key Concepts Covered

* Function templates
* Class templates
* Generic programming
* Template instantiation
* Operator overloading
* Exception handling
* Code reusability
* Type safety

---

## 🛠️ Technologies

* **Language:** C++
* **Standard:** C++98
* **Compiler:** `c++`
* **Build:** Makefile
* **OS:** Linux

---

## 📦 How to Use

Clone the repository:

```bash
git clone https://github.com/Keillin-M/CPP07.git
cd CPP07
```

Compile an exercise:

```bash
make
```

Run an exercise:

```bash
./ex00
./ex01
./ex02
```

---

## 🧪 Challenges Faced

* Understanding template syntax and compilation errors
* Debugging cryptic template-related error messages
* Designing truly generic functions
* Managing memory safely in template classes
* Implementing deep copies correctly

---

## 💡 Lessons Learned

* Templates enable powerful code reuse
* Generic programming reduces duplication
* Strong type safety is preserved with templates
* Compiler errors can be harder but more informative
* Writing flexible code improves long-term maintainability
* Templates are a core feature of modern C++
