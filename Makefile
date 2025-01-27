# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/06 10:34:55 by myokono           #+#    #+#              #
#    Updated: 2025/01/27 09:37:58 by myokono          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./includes -I./libft

LIBFT = libft/libft.a

SRCDIR = src/
SRCFILES = actions1.c actions2.c create_stack.c free_error.c main.c sort_big_cal.c \
sort_big_cal2.c sort_big.c sort_small.c sort.c sort_utils.c stack_utils1.c stack_utils2.c

SRCS = $(addprefix $(SRCDIR), $(SRCFILES))
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C libft

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	make clean -C libft
	rm -f $(OBJS)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
