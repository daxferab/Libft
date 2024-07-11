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

#### ft_memmove.c

#### ft_strlcpy.c

#### ft_strlcat.c

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
returns the position of the first *needle* character in *haystack*. If *nee* isn't inside *hay*, it returns 0.
#### ft_atoi.c
Changes a type string to a type int.
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

#### ft_itoa.c

#### ft_strmapi.c

#### ft_striteri.c

#### ft_putchar_fd.c

#### ft_putstr_fd.c

#### ft_putendl_fd.c

#### ft_putnbr_fd.c

## Bonus part (working with lists)
#### ft_lstnew.c

#### ft_lstnew.c

#### ft_lstadd_front.c

#### ft_lstsize.c

#### ft_lstlast.c

#### ft_lstadd_back.c

#### ft_lstdelone.c

#### ft_lstclear.c

#### ft_lstiter.c

#### ft_lstmap.c
