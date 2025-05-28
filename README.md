# Student Data Management System (DMS)

A simple C++ console application for managing student records. This system allows users to add new students, view all stored student records, and search for specific students by their roll number.

---

## 📜 Description

This project demonstrates basic C++ concepts includings:
* **Classes and Objects**: `DataSystem` (base class) and `SearchSystem` (derived class) are used to encapsulate data and functionality.
* **Inheritance**: `SearchSystem` inherits from `DataSystem` to reuse and extend its features.
* **Arrays**: Used to store student roll numbers and names.
* **Input/Output**: `iostream` is used for console interaction.
* **String Manipulation**: `string` is used to handle student names.
* **Menu-Driven Interface**: A simple `do-while` loop and `switch` statement provide user interaction.

---

## ✨ Features

* **Add Student**: Add a new student with a unique roll number and name to the system.
* **View All Students**: Display a list of all students currently stored, showing their roll number and name.
* **Search Student by Roll No**: Find and display the details of a student using their roll number.
* **Data Persistence (Session-based)**: Student data is maintained while the application is running. *Note: Data is not saved to a file and will be lost when the program closes.*

---

## 🛠️ Getting Started

### Prerequisites

* A C++ compiler (like G++, Clang++, MSVC)

### Compilation

1.  **Save the code**: Save the provided C++ code as `DMS.cpp`.
2.  **Open a terminal or command prompt**.
3.  **Navigate to the directory** where you saved the file.
4.  **Compile the code** using your C++ compiler. For example, with G++:
    ```bash
    g++ DMS.cpp -o DMS
    ```

### Execution

1.  After successful compilation, run the executeable:
    * On Windows:
        ```bash
        DMS.exe
        ```
    * On Linux/macOS:
        ```bash
        ./DMS
        ```

---

## 🚀 Usage

Once the program is running, you will see a menu with the following options:
