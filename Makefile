# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
<<<<<<< HEAD
#    Created: 2024/04/19 19:44:12 by pesilva-          #+#    #+#              #
#    Updated: 2024/04/19 21:41:57 by pesilva-         ###   ########.fr        #
=======
#    Created: 2024/04/18 13:32:36 by pesilva-          #+#    #+#              #
#    Updated: 2024/04/20 13:10:27 by pesilva-         ###   ########.fr        #
>>>>>>> ec3c761 (putnbr)
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

AUTHOR = pesilva-

CC = cc

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

AR = ar rcs

SRC = ft_formatof.c ft_printf.c ft_putchar_pf.c ft_putstr_pf.c \
<<<<<<< HEAD
	ft_lowhex_pf.c ft_uphex_pf.c ft_nbrbase_pf.c ft_putptr_pf.c \
	ft_putnbr_pf.c 
=======
	ft_lowhex_pf.c ft_uphex_pf.c ft_putnbr_pf.c ft_putptr_pf.c
>>>>>>> ec3c761 (putnbr)

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