CC=cc

CFLAGS=-Wall -Wextra -Werror

SRC=*.c

OBJ=$(SRC:.c=.o)

$(NAME) = libft.a


all:$(NAME)


$(NAME):$(OBJ)


*.o: *.c
	$(CC) $(CFLAGS) -c *.c

clean:
	rm *.o

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: clean fclean all re
