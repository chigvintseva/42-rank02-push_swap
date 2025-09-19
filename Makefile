
NAME = push_swap

LIBFT = libft/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

# ---------

SRC = 
OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

# -------- name rule --------
all: $(NAME)

# --------- client-----------
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