# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bsomers <bsomers@student.42.fr>              +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/13 16:21:29 by bsomers       #+#    #+#                  #
#    Updated: 2021/01/18 12:50:53 by bsomers       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	srcs/ft_isprint.c \
		srcs/ft_isdigit.c \
		srcs/ft_isalpha.c \
		srcs/ft_atoi.c \
		srcs/ft_bzero.c \
		srcs/ft_isalnum.c \
		srcs/ft_isascii.c \
		srcs/ft_memccpy.c \
		srcs/ft_memcpy.c \
		srcs/ft_memmove.c \
		srcs/ft_memset.c \
		srcs/ft_strlcpy.c \
		srcs/ft_strlen.c \
		srcs/ft_toupper.c \
		srcs/ft_tolower.c \
		srcs/ft_strlcat.c \
		srcs/ft_memchr.c \
		srcs/ft_memcmp.c \
		srcs/ft_strchr.c \
		srcs/ft_strrchr.c \
		srcs/ft_strnstr.c \
		srcs/ft_strncmp.c \
		srcs/ft_calloc.c \
		srcs/ft_strdup.c \
		srcs/ft_substr.c \
		srcs/ft_strjoin.c \
		srcs/ft_putchar_fd.c \
		srcs/ft_putstr_fd.c \
		srcs/ft_putendl_fd.c \
		srcs/ft_putnbr_fd.c

INCLUDES = includes/libft.h

all: $(NAME)

$(NAME): 
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(INCLUDES)
	ar rc $(NAME) \
		ft_isprint.o \
		ft_isdigit.o \
		ft_isalpha.o \
		ft_atoi.o \
		ft_bzero.o \
		ft_isalnum.o \
		ft_isascii.o \
		ft_memccpy.o \
		ft_memcpy.o \
		ft_memmove.o \
		ft_memset.o \
		ft_strlcpy.o \
		ft_strlen.o \
		ft_toupper.o \
		ft_tolower.o \
		ft_strlcat.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_strchr.o \
		ft_strrchr.o \
		ft_strnstr.o \
		ft_strncmp.o \
		ft_calloc.o \
		ft_strdup.o \
		ft_substr.o \
		ft_strjoin.o \
		ft_putchar_fd.o \
		ft_putstr_fd.o \
		ft_putendl_fd.o \
		ft_putnbr_fd.o

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
