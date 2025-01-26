# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/06 10:34:55 by myokono           #+#    #+#              #
#    Updated: 2025/01/26 15:05:51 by myokono          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./includes -I./libft

LIBFT = libft/libft.a

# ソースファイルとディレクトリ
SRCDIR = src/
SRCFILES = actions1.c actions2.c create_stack.c free_error.c main.c sort_big_cal.c \
sort_big_cal2.c sort_big.c sort_small.c sort.c sort_utils.c stack_utils1.c stack_utils2.c

SRCS = $(addprefix $(SRCDIR), $(SRCFILES))
OBJS = $(SRCS:.c=.o)

# デフォルトターゲット
all: $(NAME)

# push_swap 実行ファイルの生成
$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

# libft ライブラリのビルド
$(LIBFT):
	make -C libft

# オブジェクトファイル生成ルール
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# クリーンアップ
clean:
	make clean -C libft
	rm -f $(OBJS)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all

# .PHONY ターゲットの定義
.PHONY: all clean fclean re
