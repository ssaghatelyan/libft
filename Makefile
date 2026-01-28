# Компилятор и флаги
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

# Файлы библиотеки
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isalnum.c ft_isascii.c \
      ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
      ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
      ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

OBJ = $(SRC:.c=.o)

# Цель: библиотека
libft.a: $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

# Цель: компиляция с main.c для теста
test: libft.a main.c
	$(CC) $(CFLAGS) -o test_program main.c libft.a

# Правила для .o файлов
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Очистка
clean:
	rm -f $(OBJ) test_program

fclean: clean
	rm -f libft.a

re: fclean libft.a

