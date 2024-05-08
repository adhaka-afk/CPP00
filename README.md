# CPP00


## Description:

Welcome to the CPP 00 exercises! This README provides an overview of the two exercises included in this module along with instructions on how to build and run the code.
## Exercise 00: Megaphone
## Description:

The Megaphone program takes command-line arguments and converts them to uppercase.
## Files:
. Makefile: Build configuration file.

. megaphone.cpp: Source code for the Megaphone program.
## Usage 

Building:
To build the Megaphone program, run make in the ex00/ directory.

Running:
After building, execute the program with the desired command-line arguments as shown in the examples below.

```bash
$ ./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...

$ ./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.

$ ./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```


## Exercise 01: My Awesome PhoneBook
## Description:

The My Awesome PhoneBook program is a simple phonebook application with the ability to add contacts, search for contacts, and exit.
## Files:
. Makefile: Build configuration file.

. PhoneBook.hpp, PhoneBook.cpp: Implementation of the PhoneBook class.

. Contact.hpp, Contact.cpp: Implementation of the Contact class.

. main.cpp: Main entry point of the program.
## Usage 

Building:
To build the My Awesome PhoneBook program, run make in the ex01/ directory.

Running:
After building, execute the program by running ./phonebook. Follow the prompts to add, search for, or exit the phonebook.

```bash
$ ./phonebook
Enter command (ADD || SEARCH || EXIT):
```
. Enter ADD to add a new contact.

. Enter SEARCH to search for a contact.

. Enter EXIT to exit the program.

## 🚀 Next Project

[CPP01](https://github.com/adhaka-afk/CPP01)

## ⏳ Previous Project

[MiniShell](https://github.com/adhaka-afk/MINISHELL)


