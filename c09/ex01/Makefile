LIB = libft.a

SRCS = srcs
INCLDS = includes

SOURCES =	$(SRCS)/ft_putchar.c \
			$(SRCS)/ft_swap.c \
			$(SRCS)/ft_putstr.c \
			$(SRCS)/ft_strlen.c \
			$(SRCS)/ft_strcmp.c \

OBJS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I $(INCLDS)


all: $(LIB)

$(LIB): $(OBJS)
	@ar rc $(LIB) $(OBJS)
	@ranlib $(LIB)

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
