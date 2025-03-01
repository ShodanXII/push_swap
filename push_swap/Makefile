CC      := cc
CFLAGS  := -Wall -Wextra -Werror

LIBFTDIR    := libft
PRINTF_DIR  := ft_printf

LIBFT       := $(LIBFTDIR)/libft.a
PRINTF      := $(PRINTF_DIR)/libftprintf.a

SRC         := moves/push.c moves/rev_rotate.c \
				moves/rotate.c moves/rr.c		\
				moves/rrr.c moves/ss.c			\
				moves/swap.c phases/calculate_parramiters.c \
				phases/five.c phases/four.c	\
				phases/phase1.c phases/phase2.c \
				src/stack_needed.c push_swap.c \
				algo_wdakxi.c cleaner.c

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
