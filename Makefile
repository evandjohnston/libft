# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evjohnst <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 16:23:08 by evjohnst          #+#    #+#              #
#    Updated: 2018/09/10 16:38:35 by evjohnst         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIBNAMES = ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isprint ft_itoa \
			ft_memalloc ft_memset ft_strlen ft_strdup ft_strcpy ft_strncpy ft_strchr \
			ft_putchar ft_putchar_fd ft_putendl ft_putendl_fd ft_putnbr ft_putnbr_fd \
			ft_putstr ft_putstr_fd ft_strclr ft_strcmp ft_strequ ft_strdel \
			ft_strjoin ft_strncmp ft_strndup ft_strnequ ft_strsub ft_strtrim ft_strsplit \
			ft_isdigit ft_isspace ft_toupper ft_tolower 
			#  ft_memcpy ft_memccpy ft_memmove ft_memchr ft_memcmp \
			# ft_strncat ft_strlcat ft_strrchr ft_strstr ft_strnstr \
			#   
			#  ft_memdel ft_strnew   ft_striter \
			# ft_striteri ft_strmap ft_strmapi   ft_strsub \
			#     \

CFILES = $(addsuffix .c,$(LIBNAMES))
OFILES = $(addsuffix .o,$(LIBNAMES))
SRC = .
INCLUDE = .
CC = gcc -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME): $(OFILES)
	ar -rcs $(NAME) $(OFILES)

.PHONY: objects
objects: $(CFILES)
	$(CC) -c -I$(INCLUDE) $(addprefix $(SRC)/,$(CFILES))

.PHONY: clean
clean:
	/bin/rm -f $(OFILES)

.PHONY: fclean
fclean: clean
	/bin/rm -f $(NAME)

.PHONY: re
re: fclean $(NAME)
