CC = cc

SRCS = ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strlcpy.c \
 ft_strnstr.c ft_toupper.c ft_atoi.c ft_isalpha.c  ft_isprint.c  ft_memcpy.c \
 ft_strchr.c   ft_strlen.c   ft_strrchr.c ft_bzero.c ft_isascii.c ft_memchr.c \
 ft_memmove.c ft_strlcat.c ft_strncmp.c ft_tolower.c

OBJS = $(SRCS:.c; = .o)

.PHONY: clean
clean:
	rm -f *.o