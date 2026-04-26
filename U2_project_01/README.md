# Project: Dynamic Inventory System

## Assignment
> Develop a dynamic inventory management application in C. The program must allow the user to continuously add new cleaning products to the database and display the current stock, utilizing dynamic memory allocation to ensure the system scales efficiently without wasting RAM.

## Requirements
> Use `malloc` to allocate the initial memory block for the first product.
> Use `realloc` to dynamically expand the database size whenever a new product is added.
> Use `free` at the end of the program to release the memory and prevent memory leaks.
> Implement a `Product` `typedef struct` that stores `name`, `price`, and `quantity`.
> Implement an `addProduct` function that passes the inventory and count by reference (`**` and `*`).
> Implement a `displayInventory` function that passes the inventory by value.
> Ensure correct usage of the address-of operator (`&`) in `scanf` for integer values, while omitting it for string arrays.

## Core C Concepts Applied
> Shifting from fixed-size arrays (Stack) to flexible, runtime-sized arrays (Heap).
> Passing a pointer's memory address into a function so the function can permanently change where the original pointer points.
> Leveraging the fact that array names natively act as pointers to their first element.
> Accessing structure members using the Arrow Operator (`->`) vs. Dot Operator (`.`).

## Challenges
> Add a function that allows the user to search for a specific product by typing its name.
> Add a feature to remove a product from the inventory.
> Research the `<stdio.h>` functions `fopen`, `fprintf`, and `fclose` to save the inventory to a `.txt` or `.csv` file.
