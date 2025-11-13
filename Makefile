# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achigvin <achigvin@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/19 16:57:53 by achigvin          #+#    #+#              #
#    Updated: 2025/10/29 18:09:16 by achigvin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -Ilibft

# add include flags to compilation
CFLAGS += $(INCLUDES)

# ---------
OBJ_DIR = .obj

SRC = ab_push.c \
		ab_reverse_rotate.c \
		ab_rotate.c \
		ab_swap.c \
		2_to_5_sort.c \
		helpers.c \
		main.c \
		parse_input.c \
		sorting.c \
		stack_operations.c \
		turk_sort.c

OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

# -------- name rule --------
all: $(NAME)

# --------- client-----------
$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	
$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR) $(LIBFT)
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