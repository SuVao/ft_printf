# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 19:08:57 by pesilva-          #+#    #+#              #
#    Updated: 2024/04/20 19:10:06 by pesilva-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

AUTHOR = pesilva-

CC = cc

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

AR = ar rcs

SRC = ft_formatof.c ft_printf.c ft_putchar_pf.c ft_putstr_pf.c \
	ft_lowhex_pf.c ft_uphex_pf.c ft_putnbr_pf.c ft_unsigint_pf.c 

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