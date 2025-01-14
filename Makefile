NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC_FILES = mandatory/ft_isalnum.c mandatory/ft_isalpha.c mandatory/ft_isascii.c\
			mandatory/ft_isdigit.c mandatory/ft_isprint.c mandatory/ft_strlen.c\
			mandatory/ft_tolower.c mandatory/ft_toupper.c mandatory/ft_memset.c\
			mandatory/ft_bzero.c mandatory/ft_memcpy.c mandatory/ft_memmove.c\
			mandatory/ft_memcmp.c mandatory/ft_memchr.c mandatory/ft_strlcpy.c\
			mandatory/ft_strncmp.c mandatory/ft_strchr.c mandatory/ft_strrchr.c\
			mandatory/ft_strnstr.c mandatory/ft_strnstr.c mandatory/ft_strlcat.c\
			mandatory/ft_calloc.c mandatory/ft_strdup.c mandatory/ft_atoi.c\
			mandatory/ft_substr.c mandatory/ft_strjoin.c mandatory/ft_strtrim.c\
			mandatory/ft_putchar_fd.c mandatory/ft_itoa.c mandatory/ft_putendl_fd.c\
			mandatory/ft_putstr_fd.c mandatory/ft_striteri.c mandatory/ft_strmapi.c\
			mandatory/ft_putnbr_fd.c mandatory/ft_split.c ft_printf/ft_printchar.c\
			ft_printf/ft_printstr.c ft_printf/ft_printptr.c ft_printf/ft_printuns.c\
			ft_printf/ft_printhex.c ft_printf/ft_printf.c ft_printf/ft_printnbr.c\
			GNL/get_next_line.c GNL/gnl_utils.c bonus/ft_lstnew_bonus.c bonus/ft_lstadd_front_bonus.c\
			bonus/ft_lstsize_bonus.c bonus/ft_lstlast_bonus.c bonus/ft_lstadd_back_bonus.c\
			bonus/ft_lstdelone_bonus.c bonus/ft_lstclear_bonus.c bonus/ft_lstiter_bonus.c\
			bonus/ft_lstmap_bonus.c

SRC_FILES := $(addprefix src/, $(SRC_FILES))

OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) -c $(CFLAGS) $(SRC_FILES)
	ar -rcs $(NAME) $(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
