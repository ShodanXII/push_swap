CC      := cc
CFLAGS  := -Wall -Wextra -Werror

SRCDIR  := src
INCDIR  := include
LIBDIR  := libft

LIBFT   := $(LIBDIR)/libft.a
PRINTF  := $(LIBDIR)/ft_printf.a

SRC     := error.c init.c moves.c pa.c pb.c \
           push_swap.c ra.c rb.c rr.c rra.c rrb.c rrr.c \
           sa.c sb.c ss.c stack_needed.c

# Object files
OBJ     := $(SRC:%.c=$(SRCDIR)/%.o)

# Executable name
NAME    := push_swap

# Include directories
INCLUDES := -I$(INCDIR) -I$(LIBDIR)

# Default target
all: $(NAME)

# Link the executable
$(NAME): $(LIBFT) $(PRINTF) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)

# Compile source files into object files
$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Build libft
$(LIBFT):
	$(MAKE) -C $(LIBDIR)

# Build ft_printf
$(PRINTF):
	$(MAKE) -C $(LIBDIR) ft_printf.a

# Clean object files
clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBDIR) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)
	rm -f $(PRINTF)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
