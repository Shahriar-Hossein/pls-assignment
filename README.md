
# 🧠 Array Allocation Strategies: C++ vs JavaScript

This repository demonstrates different types of array memory allocation strategies using **C++** and **JavaScript**. It fulfills the requirements of the following assignment:

> **Assignment**:  
> Write programs/structures to test these categories:  
> - Fixed Stack Dynamic  
> - Stack Dynamic  
> - Fixed Heap Dynamic  
> - Heap Dynamic  
> Using any two languages from C++, Java, Python, or JavaScript.

## 📁 Directory Structure

```
.
├── cpp_fixed_heap_dynamic.cpp
├── cpp_fixed_stack_dynamic.cpp
├── cpp_heap_dynamic.cpp
├── cpp_stack_dynamic.cpp
├── js_fixed_heap_dynamic.js
├── js_fixed_stack_dynamic.js
├── js_heap_dynamic.js
├── js_stack_dynamic.js
└── README.md
```

## 📚 Category Descriptions

| Category              | Description                                                                 |
|-----------------------|-----------------------------------------------------------------------------|
| **Fixed Stack Dynamic** | Fixed size array known at compile time; stored on stack                    |
| **Stack Dynamic**       | Size known at runtime; allocated on stack (if supported)                   |
| **Fixed Heap Dynamic**  | Fixed size array allocated on heap memory                                  |
| **Heap Dynamic**        | Heap-allocated array that can grow/shrink at runtime                       |

## 💻 Language Comparison Table

| Category              | C++ Example                              | JavaScript Example                         | Notes                                                        |
|-----------------------|-------------------------------------------|--------------------------------------------|--------------------------------------------------------------|
| Fixed Stack Dynamic   | `int arr[5];`                             | `const arr = [1, 2, 3, 4, 5];`              | JS does not support true stack allocation                   |
| Stack Dynamic         | `int n; cin >> n; int arr[n];`            | `let n = 5; let arr = new Array(n);`        | C++ uses VLAs (if supported), JS simulates with heap array  |
| Fixed Heap Dynamic    | `int* arr = new int[n];`                  | `let arr = new Array(n);`                  | Both allocate on heap with fixed size                       |
| Heap Dynamic          | `vector<int> arr; arr.push_back(x);`      | `let arr = []; arr.push(x);`               | Both support resizable heap-based arrays                    |

## 🛠️ How to Run

### C++ (Using g++)

```bash
cd cpp
g++ fixed_stack.cpp -o fixed_stack
./fixed_stack
```

Repeat for other `.cpp` files.

### JavaScript (Using Node.js)

```bash
cd js
node fixed_stack.js
```

Repeat for other `.js` files.

## 🔍 Summary of Language Behavior

| Feature                | C++                                     | JavaScript                              |
|------------------------|------------------------------------------|------------------------------------------|
| Manual Memory Control  | Yes (stack vs heap explicit)             | No (managed by engine)                   |
| Stack Allocation       | Available via static arrays/VLAs         | Not directly possible                    |
| Heap Allocation        | `new[]`, `vector`                        | All arrays are heap-allocated            |
| Dynamic Resize         | `vector` with `.push_back()`             | Native `Array` with `.push()`            |
| Performance Control    | High                                     | Medium                                   |

## ✅ Assignment Status

- [x] Implemented all 4 categories in **C++**
- [x] Implemented all 4 categories in **JavaScript**
- [x] Compared array allocation structures between the two languages
- [x] Added this comprehensive `README.md`
- [x] Ready for GitHub upload and sharing ✅

## ✍️ Author

**[Your Name]**  
**Submitted on:** Sunday (before deadline)  
**Languages Used:** C++, JavaScript