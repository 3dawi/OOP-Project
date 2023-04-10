# OOP-Project
This repository contains the solution for an Object-Oriented Programming (OOP) assignment, which involved implementing two classes (Book and Library) in C++ and writing a driver program to test them.

Book Class
The Book class represents a book with a `title`, `ISBN`, `first author`, and `number of copies`. The class has a `parameterized constructor`, `getters` and `setters` for all data members, and a `method to update the number of copies`. The Book class is used by the `Library class` to store information about the books in the library.

Library Class
The Library class represents a library that contains several books. The class has a `dynamic array` of Book objects that represents all unique book titles in the library. The Library class has methods to `add and remove books`, `resize the dynamic array`, find books by `title` or `ISBN`, and get information about the library (e.g., current number of books, maximum number of books, capacity usage).

Driver Program
The `driver.cpp` program tests the Book and Library classes by creating `a dynamic array of Book objects`, filling them with data from the user, `creating a Library object`, and adding the books to the library. The program also demonstrates the use of some of the methods of the Library class.

Files
The repository contains the following files:

`book.cpp`: implementation of the Book class
`book.h`: header file for the Book class
`library.cpp`: implementation of the Library class
`library.h`: header file for the Library class
`driver.cpp`: driver program to test the classes
`Makefile`: makefile to build the program
Building and Running the Program
To build the program, run the following command:

```
make
```
This will compile the driver.cpp, book.cpp, and library.cpp files and create an executable named driver.

To run the program, run the following command:

```
./driver
```
This will run the driver program and test the Book and Library classes.

Author
The code in this repository was written by **Ahmad Awwad**, **Ahmad Adawi**, and **Adnan Saeed**.

Acknowledgments
This assignment was given as part of *Object Oriented Programming course*/ **Princess Sumaya University for Technology**. Thanks to **Anas Abu-Taleb** for providing the assignment and specifications.
