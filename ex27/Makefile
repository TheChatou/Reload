# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 20:46:56 by fcoullou          #+#    #+#              #
#    Updated: 2023/11/04 19:16:33 by fcoullou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= ft_display_file

#------------------------------------------------#

SRC		= ft_display_file.c
OBJ		= $(SRC:.c=.o)


CC			:= clang
CFLAGS		:= -Wall -Wextra -Werror

RM			:= rm -f

#------------------------------------------------#

all: $(NAME)

$(NAME): 
	$(CC) -c $(CFLAGS) $(SRC) 
	$(CC) -o $(NAME) $(OBJ) 

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
