CC      := cc
CFLAGS  := -Wall -Wextra -Werror


SRC         := moves/push.c moves/rev_rotate.c \
				moves/rotate.c moves/rr.c		\
				moves/rrr.c moves/ss.c			\
				moves/swap.c phases/calculate_parramiters.c \
				phases/five.c phases/four.c	\
				phases/phase1.c phases/phase2.c \
				src/stack_needed.c push_swap.c \
				src/algo_wdakxi.c src/cleaner.c \
				src/ft_atoi.c src/ft_isdigit.c \
				src/ft_strjoin.c src/ft_split.c \
				src/ft_calloc.c src/ft_strdup.c \
				src/ft_strlen.c src/ft_strlcpy.c \
				src/ft_memcpy.c

OBJ         := $(SRC:.c=.o)

NAME        := push_swap

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
