CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strlcpy.c \
	ft_strnstr.c ft_toupper.c ft_atoi.c ft_isalpha.c  ft_isprint.c  ft_memcpy.c \
	ft_memmove.c ft_strlcat.c ft_strncmp.c ft_tolower.c \
	ft_strchr.c   ft_strlen.c   ft_strrchr.c ft_bzero.c ft_isascii.c ft_memchr.c


OBJS = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

#共有ライブラリの生成ルール
ft_isalnum.o: ft_isalnum.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_isdigit.o: ft_isdigit.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_memcmp.o: ft_memcmp.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_memset.o: ft_memset.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strlcpy.o: ft_strlcpy.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strnstr.o: ft_strnstr.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_toupper.o: ft_toupper.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_atoi.o: ft_atoi.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_isalpha.o: ft_isalpha.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_isprint.o: ft_isprint.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_memcpy.o: ft_memcpy.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strchr.o: ft_strchr.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strlen.o: ft_strlen.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strrchr.o: ft_strrchr.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_bzero.o: ft_bzero.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_isascii.o: ft_isascii.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_memchr.o: ft_memchr.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_memmove.o: ft_memmove.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strlcat.o: ft_strlcat.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_strncmp.o: ft_strncmp.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_tolower.o: ft_tolower.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re