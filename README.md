# Role of Exception Handling in Reliable Software Systems

## 📌 About the Project

This case study explores the **role of exception handling in developing reliable software systems using C++**. Exception handling helps a program detect and manage runtime errors without terminating unexpectedly.

The project demonstrates how C++ exception-handling mechanisms can improve program reliability, readability, and error management.

## 🎯 Objectives

- Understand the concept of exception handling in C++.
- Learn the use of `try`, `throw`, and `catch`.
- Handle invalid inputs and runtime errors.
- Understand exception propagation between functions.
- Demonstrate how exception handling improves software reliability.

## 🛠️ Technologies Used

- **Programming Language:** C++
- **Compiler:** GCC (g++)
- **IDE:** Visual Studio Code
- **Concept:** Object-Oriented Programming (OOPS)

## 📚 Concepts Covered

### 1. Try Block
The `try` block contains code that may generate an exception.

### 2. Throw Statement
The `throw` statement is used to raise an exception when an error or exceptional condition occurs.

### 3. Catch Block
The `catch` block handles an exception thrown from the corresponding `try` block.

### 4. Standard Exceptions
C++ provides standard exception classes such as:
- `invalid_argument`
- `domain_error`
- `runtime_error`
- `out_of_range`

### 5. Exception Propagation
An exception can travel from a function to its caller until a suitable `catch` block handles it.

## ⚙️ Features

- Handles division-by-zero errors.
- Detects invalid numerical inputs.
- Handles invalid square-root operations.
- Reports file-opening errors.
- Uses multiple `catch` blocks for different exceptions.
- Provides a menu-driven interface for demonstrating exception handling.

## 📂 Project Structure

```text
CASE_STUDY_OOPS_ROLE-OF-EXCEPTIONHANDLING_SOFTWARE_SYSTEMS/
│
├── exception_handling_case_study.cpp
└── README.md
```

## ▶️ How to Run the Project

### Step 1: Clone the Repository

```bash
git clone <your-repository-url>
```

### Step 2: Open the Project Folder

```bash
cd CASE_STUDY_OOPS_ROLE-OF-EXCEPTIONHANDLING_SOFTWARE_SYSTEMS
```

### Step 3: Compile the Program

```bash
g++ exception_handling_case_study.cpp -o exception_demo
```

### Step 4: Run the Program

**Windows:**

```bash
.\exception_demo
```

**Linux/macOS:**

```bash
./exception_demo
```

Make sure a C++ compiler such as GCC is installed before running these commands.

## 💻 Sample Output

```text
===== Exception Handling Demo =====
1. Divide two numbers
2. Calculate square root
3. Read a file
4. Exit

Enter your choice: 1
Enter two numbers: 10 0
Input Error: Division by zero is not allowed.
```

*Note: The exact output depends on the selected operation and input.*

## ✅ Advantages of Exception Handling

- Prevents many runtime errors from causing abrupt program termination.
- Separates error-handling logic from normal program logic.
- Improves code readability and maintainability.
- Allows different types of errors to be handled separately.
- Supports the development of more robust software.

## 📝 Conclusion

Exception handling is an important feature of C++ that helps developers manage exceptional conditions systematically. By using `try`, `throw`, and `catch`, programmers can identify errors, communicate meaningful error messages, and allow programs to respond more safely to failures.

This case study demonstrates how exception handling contributes to the development of more reliable and maintainable software systems.

## 👩‍💻 Author

**Sania Amjad**  
BCA Data Science  
Chandigarh University

---

*Academic Case Study — Object-Oriented Programming with C++*

