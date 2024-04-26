# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 20:46:56 by fcoullou          #+#    #+#              #
#    Updated: 2023/11/20 15:51:32 by fcoullou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a

#------------------------------------------------#

SRC_DIR		:= srcs
OBJ_DIR		:= obj
SRCS		= $(wildcard $(SRC_DIR)/*.c)
OBJS		= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)


AR			:= ar
CC			:= clang
CFLAGS		:= -Wall -Wextra -Werror
CPPFLAGS	:= -I includes

RM			:= rm -f
DIR_DUP		= mkdir -p $(@D)

#------------------------------------------------#

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)
	$(info CREATED $(NAME))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<
	$(info CREATED $@)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all