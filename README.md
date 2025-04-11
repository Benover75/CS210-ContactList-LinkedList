# CS210-ContactList-LinkedList

## Overview
The **CS210-ContactList-LinkedList** project is a C++ application that demonstrates the use of a linked list data structure to manage a simple contact list. Each contact is encapsulated in a node using the `ContactNode` class, which stores the contact’s name and phone number. This project was developed as part of CS210 to gain hands-on experience with dynamic memory management, pointers, and object-oriented programming in C++.

## Project Summary and Journal Reflection

### Project Summary
The main goal of this project was to create a functional contact list that:
- Reads contact details from an input file.
- Dynamically creates nodes for each contact.
- Links these nodes to form a linked list.
- Outputs both individual contact details and the entire list.

Key files in this project:
- **`ContactNode.h`** – Declaration of the `ContactNode` class (see :contentReference[oaicite:0]{index=0}).
- **`ContactNode.cpp`** – Implementation of the class functions (see :contentReference[oaicite:1]{index=1}).
- **`main.cpp`** – Main driver code integrating file input, node creation, and linked list traversal (see :contentReference[oaicite:2]{index=2}).
- **`input.txt`** – Sample file containing contact information (see :contentReference[oaicite:3]{index=3}).

### Reflective Journal
Reflecting on the project:
- **What Was Solved:**  
  The application addresses contact management through a linked list, demonstrating key concepts of data structures, dynamic memory allocation, and pointer management.
  
- **Strengths:**
  - **Modular Design:** Clear separation between interface (`.h` files) and implementation (`.cpp` files).
  - **Documentation & Readability:** Comprehensive in-line comments provide clarity about the functionality of each code segment.
  - **OOP Utilization:** Effective encapsulation within the `ContactNode` class aids in code reusability and ease of maintenance.
  
- **Areas for Improvement:**
  - **Memory Management:** Consider transitioning from raw pointers to smart pointers (e.g., `std::unique_ptr`) to enhance memory safety.
  - **Error Handling:** Implement additional input validation to manage edge cases and potential runtime errors.
  - **Feature Extensions:** Future iterations could include functionalities for contact deletion, search, or sorting, improving the application’s robustness.
  
- **Challenges and Overcoming Them:**
  - **Dynamic Memory Allocation:** Transitioning from procedural to object-oriented dynamic memory management required careful attention, which was overcome by iterative testing and consulting industry best practices.
  - **Integrating Input with Data Structures:** Leveraging debugging techniques and peer support facilitated smooth integration of file input into the linked list implementation.
  
- **Transferable Skills:**
  - **Modular Programming:** Enhanced skills in dividing projects into manageable components.
  - **Dynamic Memory Management:** Insights into memory safety which are applicable in more complex projects.
  - **Documentation:** Experience in creating self-explanatory code which benefits future development and collaborative projects.

## Folder Structure

The repository is organized to separate source code, executable files, data, and documentation for clear project management. Below are two recommended structures.

### Option 1: Flat Structure


