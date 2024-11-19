CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SOURCE_FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
			ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c

OBJECT_FILES = $(SOURCE_FILES:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECT_FILES)
	ar -rc $(NAME) $(OBJECT_FILES)

$(OBJECT_FILES): $(SOURCE_FILES) libft.h
	$(CC) $(CFLAGS) -c $(SOURCE_FILES)

clean:
	$(RM) $(OBJECT_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:clean
