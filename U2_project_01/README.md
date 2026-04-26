# Project: Tu Hogar Ordenado - Dynamic Inventory System

## 📝 Assignment
Develop a dynamic inventory management application in C for the "Tu Hogar Ordenado" business. The program must allow the user to continuously add new cleaning products to the database and display the current stock, utilizing dynamic memory allocation to ensure the system scales efficiently without wasting RAM.

## 🛠 Requirements
1. **Dynamic Memory Management:** - Use `malloc` to allocate the initial memory block for the first product.
   - Use `realloc` to dynamically expand the database size whenever a new product is added.
   - Use `free` at the end of the program to release the memory and prevent memory leaks.
2. **Custom Data Structures:** Implement a `Product` `typedef struct` that stores:
   - `name` (character array)
   - `price` (integer)
   - `quantity` (integer)
3. **Modular Control Flow:** - Implement an `addProduct` function that passes the inventory and count by reference (using double pointers `**` and standard pointers `*`) to modify the core database.
   - Implement a `displayInventory` function that passes the inventory by value to safely read and print the data using array notation (`[]`).
4. **Pointer Precision:** Ensure correct usage of the address-of operator (`&`) in `scanf` for integer values, while omitting it for string arrays.

## 🧠 Core C Concepts Applied
- **Heap vs. Stack:** Shifting from fixed-size arrays (Stack) to flexible, runtime-sized arrays (Heap).
- **Double Pointers (`**`):** Passing a pointer's memory address into a function so the function can permanently change where the original pointer points.
- **Pointer Arithmetic & Arrays:** Leveraging the fact that array names natively act as pointers to their first element.
- **Arrow Operator (`->`) vs. Dot Operator (`.`):** Accessing structure members depending on whether the variable is a pointer or a direct instance.

## 🚀 Challenges
1. **Search Functionality:** Add a function that allows the user to search for a specific product by typing its name.
2. **Product Deletion:** Add a feature to remove a product from the inventory. Challenge yourself to update the array and effectively "shrink" the dynamic memory or mark the item as deleted.
3. **File Persistence:** Currently, the data disappears when the program closes. Research the `<stdio.h>` functions `fopen`, `fprintf`, and `fclose` to save the inventory to a `.txt` or `.csv` file so the data is saved permanently.
