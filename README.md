# Libft
Expandible library with owner`s functions
## Mandatory part
### Part 1 - Replicate existing C functions
#### ft_isalpha.c
Returns 1 if the given character is alphabetical
#### ft_isdigit.c
Returns 1 if the given character is a number
#### ft_isalnum.c
Returns 1 if the given character is alphabetical or a number
#### ft_isascii.c
Returns 1 if the given character belongs to the ascii table
#### ft_isprint.c
Returns 1 if the given character is printable (32 - 127 in the ascii table)
#### ft_strlen.c
Returns the lenght of the given string (without the ending character)
#### ft_memset.c
Returns the given pointer, filling up to *len* positions with the given character
#### ft_bzero.c
Returns the given pointer, filling up to *len* positions with null
#### ft_memcpy.c
Copies *len* bytes from *src* to *dest*
#### ft_memmove.c
Copies *len* bytes from *src* to *dest*, controlling overlap
#### ft_strlcpy.c
Copies up to *size* -1 bytes from *src* to *dest*
#### ft_strlcat.c
Copies *src* at the end of *dest* until *dst* has *dstsize* (or less) 
#### ft_toupper.c
Returns the uppercase of the given character (only if its a letter)
#### ft_tolower.c
Returns the lowercase of the given character (only if its a letter)
#### ft_strchr.c
Returns the position of the first occurency of the given character in the given string. If it doesn't exist it returns 0
#### ft_strrchr.c
Returns the position of the last occurency of the given character in the given string. If it doesn't exist it returns 0
#### ft_strncmp.c
Compares the given strings, if they are different, it returns the character difference (in ascii decimal), else, it returns 0
#### ft_memchr.c
Returns the position of the first occurency of the given character in the given string up to *n* characters. If it doesn't exist it returns 0
#### ft_memcmp.c
Compares the given strings, if they are different, it returns the character difference (in ascii decimal) up to *n* characters, else, it returns 0
#### ft_strnstr.c
returns the position of the first *needle* character in *haystack*. If *nee* isn't inside *hay*, it returns 0
#### ft_atoi.c
Changes a type string to a type integer
#### ft_calloc.c
Allocates an array of size *size\*count* and fills it with nulls
#### ft_strdup.c
Copies the given string into a previously allocated memory space
### Part 2 - Extra functions
#### ft_substr.c
Allocates and returns a substring of the given string, starting on the *start* position, up to *len* characters
#### ft_strjoin.c
Allocates and returns a string, concatenating the two given strings
#### ft_strtrim.c
Allocates and returns a string like *s1*, but deleting every occurency of the characters in *set*
#### ft_split.c
Allocates and returns an array of strings, separating the given string, using the given character as a delimiter
#### ft_itoa.c
Allocates an returns a string representing the given integer
#### ft_strmapi.c
Allocates and returns the given string, previously formated with the given function
#### ft_striteri.c
Applies the given function to each character of the given string
#### ft_putchar_fd.c
Sends the given character to the given file descriptor
#### ft_putstr_fd.c
Sends the given string to the given file descriptor
#### ft_putendl_fd.c
Sends the "nextline" character to the given file descriptor
#### ft_putnbr_fd.c
Sends the given number to the given file descriptor
## Bonus part (working with lists)
#### ft_lstnew.c
Creates a new node, allocated with malloc, initializing it with the given parameter
#### ft_lstadd_front.c
Adds the given node to the beggining of the given list
#### ft_lstsize.c
Returns the size of the given list
#### ft_lstlast.c
Returns the last node of the given list
#### ft_lstadd_back.c
Adds the given node to the end of the given list
#### ft_lstdelone.c
Deletes memory of the given node and frees the node
#### ft_lstclear.c
Deletes and frees the given node and all the next ones
#### ft_lstiter.c
Applies the given function to each node of the given list
#### ft_lstmap.c
Same as **ft_lstiter**, but creating a new list with the "new" nodes
## Printf
#### ft_printf.c
#### ft_printchar.c
#### ft_printhex.c
#### ft_printnbr.c
#### ft_printptr.c
#### ft_printstr.c
#### ft_printuns.c
