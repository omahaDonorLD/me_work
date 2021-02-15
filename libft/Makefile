CC	= gcc
NAME	= libft.a
SRCS	= ft_memset.c
CFLAGS	= -Wall -Werror -Wextra
OBJS	= $(SRCS:%.c=%.o)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I./
	ar -rcs $@ $^

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
