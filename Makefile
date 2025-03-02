CC      := cc
CFLAGS  := -Wall -Wextra -Werror

LIBFTDIR    := libft

LIBFT       := $(LIBFTDIR)/libft.a

SRC         := moves/push.c moves/rev_rotate.c \
				moves/rotate.c moves/rr.c		\
				moves/rrr.c moves/ss.c			\
				moves/swap.c phases/calculate_parramiters.c \
				phases/five.c phases/four.c	\
				phases/phase1.c phases/phase2.c \
				src/stack_needed.c push_swap.c \
				src/algo_wdakxi.c src/cleaner.c

OBJ         := $(SRC:.c=.o)

NAME        := push_swap

INCLUDES    := -I. -I$(LIBFTDIR)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re
