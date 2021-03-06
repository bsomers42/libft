# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bsomers <bsomers@student.42.fr>              +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/13 16:21:29 by bsomers       #+#    #+#                  #
#    Updated: 2021/03/31 17:39:11 by bsomers       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

O_FILES = ft_isprint.o \
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
		ft_putnbr_fd.o \
		ft_strmapi.o \
		ft_strtrim.o \
		ft_itoa.o

SRC = $(O_FILES:.o=.c)

O_BONUS = ft_lstnew.o \
		ft_lstadd_front.o \
		ft_lstsize.o \
		ft_lstlast.o \
		ft_lstadd_back.o \
		ft_lstdelone.o

BONUS = $(O_BONUS:.o=.c)

HEADER = libft.h

CFLAGS = -Wall -Wextra -Werror

ifdef WITH_BONUS
	OBJ = $(O_FILES) $(O_BONUS)
else
	OBJ = $(O_FILES)
endif

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c $(HEADER)
	$(CC) -c $(CFLAGS) -o $@ $<

bonus:
	$(MAKE) WITH_BONUS=1 all

clean:
	rm -f $(O_FILES) $(O_BONUS)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
