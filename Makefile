# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: narajaon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/11 18:59:25 by narajaon          #+#    #+#              #
#    Updated: 2017/04/13 14:53:44 by narajaon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean
.SUFFIXES:

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
COPTION = -c -I
srcdir =
includedir = .
libdir =


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(COPTION) $(includedir) $(srcdir)*.c
	ar rc $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
