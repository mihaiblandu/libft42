# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mihai <mihai@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/04 21:40:15 by mihai             #+#    #+#              #
#    Updated: 2020/11/23 14:58:31 by mihai            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror
FLAG2 = -O

NAME = libft.a

SRC = mem/ft_memset.c \
      mem/ft_memcpy.c \
      mem/ft_memccpy.c \
	  mem/ft_memchr.c \
	  mem/ft_memcmp.c \
      mem/ft_bzero.c \
      mem/ft_memmove.c \
      mem/ft_memdel.c \
	  str/ft_strlen.c \
	  str/ft_strcpy.c \
	  str/ft_strlcpy.c \
	  str/ft_strcmp.c \
	  str/ft_strncmp.c \
	  str/ft_strncpy.c \
	  str/ft_strnew.c \
	  str/ft_strclr.c \
	  str/ft_strdel.c \
	  str/ft_strdup.c \
	  str/ft_strcat.c \
	  str/ft_strlcat.c \
	  str/ft_strnlen.c \
	  str/ft_strchr.c \
	  str/ft_strrchr.c \
	  str/ft_strstr.c \
	  str/ft_strrev.c \
	  str/ft_strtriml.c \
	  str/ft_strtrimr.c \
	  str/ft_trim.c \
	  str/ft_strnstr.c \
	  str/ft_strndup.c \
	  mem/ft_calloc.c \
	  mem/ft_memalloc.c \
	  is/ft_isalpha.c \
	  is/ft_isalnum.c \
	  is/ft_isblank.c \
	  is/ft_isspace.c \
	  is/ft_isdigit.c \
	  is/ft_isascii.c \
	  is/ft_isprint.c \
	  to/ft_tolower.c \
	  to/ft_toupper.c \
	  to/ft_atoi.c \
	  to/ft_atoi_max.c \
	  striter/ft_striter.c \
	  striter/ft_striteri.c \
	  striter/ft_striterator.c \
	  striter/ft_strmap.c \
	  striter/ft_strmapi.c \
	  strequ/ft_strequ.c \
	  strequ/ft_strnequ.c \
	  strsub/ft_strsub.c \
	  strsub/ft_substr.c \
	  strsub/ft_strjoin.c \
	  strsub/ft_strtrim.c \
	  put/ft_putchar.c \
	  put/ft_putchar_fd.c \
	  put/ft_putendl.c \
	  put/ft_putendl_fd.c \
	  put/ft_putstr.c \
	  put/ft_putstr_fd.c \
	  put/ft_putnbr.c \
	  put/ft_putnbr_fd.c \
	  put/ft_itoa.c \
	  put/ft_strsplit.c \
	  put/ft_split.c \
	  put/ft_print_bits.c\
      strarr/ft_count_words.c \
      strarr/ft_cwchar.c \
      strarr/sizearr.c \
      strarr/ft_contains.c  \
      string/replace_char.c \
      string/replace_with_space.c \
      string/ft_str_is_alpha.c \
      string/ft_str_is_numeric.c \
      string/ft_str_is_lowercase.c \
      string/ft_str_is_printable.c \
      string/ft_strupcase.c \
      string/ft_str_is_empty.c \
      string/remove_spaces.c \
      lst/ft_lstnew.c \
      lst/ft_lstmap.c \
      lst/ft_lstdelone.c \
      lst/ft_lstadd_front.c \
      lst/ft_lstadd_back.c \
      lst/ft_lstsize.c \
      lst/ft_lstlast.c \
      lst/ft_lstiter.c \
      lst/ft_lstclear.c \
      get_next_line/get_next_line.c \
      get_next_line/queue.c \
      main.c


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"
	
re: fclean all

clion:
	rm -rf clion
	gcc main.c libft.a -o $@
run:
	./clion
leeks:
	valgrind ./clion

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

.PHONY: all, clean, fclean, re

