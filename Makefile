# Variables
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_calloc.c ft_memcpy.c ft_bzero.c ft_strchr.c ft_split.c ft_isalpha.c ft_isdigit.c ft_atoi.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_memset.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_tolower.c ft_toupper.c
OBJ = $(SRC:.c=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: all
	$(CC) $(CFLAGS) -o test main.c $(NAME)
	./test