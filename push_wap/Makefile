CC      := cc
CFLAGS  := -Wall -Wextra -Werror

LIBFTDIR    := libft
PRINTF_DIR  := ft_printf

LIBFT       := $(LIBFTDIR)/libft.a
PRINTF      := $(PRINTF_DIR)/libftprintf.a

SRC         := error.c init.c moves.c pa.c pb.c \
               push_swap.c ra.c rb.c rr.c rra.c rrb.c \
               rrr.c sa.c sb.c ss.c stack_needed.c \
			   sorted_reference.c algo_wdakxi.c \
			   phase1.c paramiters.c

OBJ         := $(SRC:.c=.o)

NAME        := push_swap

INCLUDES    := -I. -I$(LIBFTDIR) -I$(PRINTF_DIR)

all: $(LIBFT) $(PRINTF) $(NAME)

$(NAME): $(OBJ) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFTDIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFTDIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
