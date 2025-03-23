# 📚 Libft - 42 School Project

Welcome to **libft**! 🎉 This is the first mandatory project of the **Common Core** at 42 School, where we create our own C library of functions. This project is not only an introduction to C programming but also a great opportunity to understand how standard C library functions work.

In addition to the basic requirements, I've implemented **all the bonus functions** and also included **Get Next Line (GNL)** and **ft_printf**. 🚀

---

### 📂 Project Structure

libft/  
├── src/                # All files (.c)  
│   ├── GNL             # Get Next Line  
│   ├── bonus           # List functions  
│   ├── ft_printf       # Printf  
│   └── mandatory       # Base functions  
├── .gitignore  
├── Makefile            # Makefile to compile the project  
├── README.md           # This file  
└── include/libft.h     # Header file (.h)  


### 📜 Implemented Functions

#### 🧱 Basic Functions (Part 1 and 2)
- **Character Functions**: `isalnum`, `isalpha`, `isascii`, `isdigit`, `isprint`, `tolower`, `toupper`
- **Memory Functions**: `bzero`, `calloc`, `memchr`, `memcmp`, `memcpy`, `memmove`, `memset` 
- **Output Functions**: `putchar_fd`, `putendl_fd`, `putnbr_fd`, `putstr_fd`
- **String Functions**: `atoi`, `itoa`, `split`, `strchr`, `strdup`, `striteri`, `strjoin`, `strlcat`, `strlcpy`, `strlen`, `strmapi`, `strncmp`, `strnstr`, `strrchr`, `strtrim`, `substr`, 

#### 🎁 Bonus Functions
- **Linked List Functions**: `lstadd_back`, `lstadd_front`, `lstclear`, `lstdelone`, `lstiter`, `lstlast`, `lstmap`, `lstnew`, `lstsize`

#### 🚀 Get Next Line (GNL)
- **GNL**: A function that reads line by line from a file descriptor, ideal for handling files or network inputs.

#### 🖨️ Ft_Printf
- A function that replicates `printf`
---

## 🛠️ How to Use

### 📦 Compilation

To compile the library, run the following command in the root of the project:

```
make
```
This will generate a libft.a file that you can link in your projects.

#### 🧩 Include in Your Project
To use libft in your project, include the header file and link the library:
```
#include "libft.h"
```
And compile your project with:
```
gcc -Wall -Wextra -Werror -Iincludes -L. -lft your_program.c -o your_program
```
