# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/03 18:15:26 by kensei            #+#    #+#              #
#    Updated: 2024/12/20 14:58:19 by kenakamu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libft.a

SRCS	= 	ft_isalnum.c \
						ft_isdigit.c	\
						ft_memcmp.c		\
						ft_memset.c		\
						ft_strlcpy.c	\
						ft_strnstr.c	\
						ft_toupper.c	\
						ft_atoi.c		\
						ft_isalpha.c	\
						ft_isprint.c	\
						ft_memmove.c	\
						ft_strlcat.c	\
						ft_strncmp.c	\
						ft_tolower.c	\
						ft_strchr.c		\
						ft_strlen.c		\
						ft_strrchr.c	\
						ft_bzero.c		\
						ft_memcpy.c		\
						ft_isascii.c	\
						ft_memchr.c		\
						ft_calloc.c		\
						ft_strdup.c		\
						ft_substr.c		\
						ft_strjoin.c	\
						ft_strtrim.c	\
						ft_split.c		\
			 			ft_itoa.c		\
						ft_strmapi.c	\
						ft_striteri.c	\
						ft_putchar_fd.c	\
						ft_putstr_fd.c	\
						ft_putendl_fd.c	\
						ft_putnbr_fd.c


CC			=	cc

CFLAGS		=	-Wall -Wextra -Werror


#current dir.ver
OBJS		=	$(SRCS:.c=.o)
all:			$(NAME)


$(NAME):		$(OBJS)
	ar rcs $(NAME) $(OBJS)

#current dir.ver
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean:			clean
	rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

bonus:
	echo "a"
