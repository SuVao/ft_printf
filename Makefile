# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 13:32:36 by pesilva-          #+#    #+#              #
#    Updated: 2024/04/18 14:11:41 by pesilva-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

AUTHOR = pesilva-

CC = cc

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

AR = ar crs

SRC = 

BONUS = 

OBJ = $(SRC:.C=.O)

BONUS_OBJ = $(BONUS:.C=.O)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus : $(BONUS_OBJ)
	$(AR) $(NAME) $(BONUS_OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus