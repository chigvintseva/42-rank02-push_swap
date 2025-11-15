# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/19 16:57:53 by achigvin          #+#    #+#              #
#    Updated: 2025/11/15 14:47:50 by achigvin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

# ---------

SRC = ab_push.c \
		ab_reverse_rotate.c \
		ab_rotate.c \
		ab_swap.c \
		helpers.c \
		main.c \
		parse_input.c \
		sorting.c \
		sorting_2_3.c \
		stack_operations.c \
		turk_sort_utils_02.c \
		turk_sort_utils_01.c \
		turk_sort_utils.c \
		turk_sort.c \
		parse_string.c


OBJ_DIR = objects_push_swap
OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

# -------- name rule --------
all: $(LIBFT) $(NAME)

# --------- main compilation-----------
$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	
$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# ------ libft compilation, -C flag is for "change directory to the subdirectory libft"
$(LIBFT):
	$(MAKE) -C libft

# --------- clean fclean re rules-----------
clean:
	rm -f $(OBJ)
	$(MAKE) -C libft clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean
	rm -rf $(OBJ_DIR)

re: fclean all

# -------------------
.PHONY: all clean fclean re
