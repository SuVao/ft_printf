# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 19:08:57 by pesilva-          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2024/04/20 20:59:31 by pesilva-         ###   ########.fr        #
=======
#    Updated: 2024/04/21 16:36:38 by pesilva-         ###   ########.fr        #
>>>>>>> b00770a (100% done)
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

AUTHOR = pesilva-

CC = cc

FLAGS = -Wall -Werror -Wextra 

RM = rm -rf

AR = ar rcs

SRC = ft_formatof.c ft_printf.c ft_putchar_pf.c ft_putstr_pf.c \
	ft_lowhex_pf.c ft_uphex_pf.c ft_putnbr_pf.c ft_unsigint_pf.c \
	ft_putptr_pf.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus