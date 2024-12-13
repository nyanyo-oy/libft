# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kensei <kensei@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/03 18:15:26 by kensei            #+#    #+#              #
#    Updated: 2024/12/14 06:04:55 by kensei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_isalnum.c \
						ft_isdigit.c	\
						ft_memcmp.c		\
						ft_memset.c 	\
						ft_strlcpy.c 	\
						ft_strnstr.c 	\
						ft_toupper.c 	\
						ft_atoi.c		\
						ft_isalpha.c 	\
						ft_isprint.c 	\
						ft_memmove.c 	\
						ft_strlcat.c 	\
						ft_strncmp.c 	\
						ft_tolower.c 	\
						ft_strchr.c 	\
						ft_strlen.c 	\
						ft_strrchr.c 	\
						ft_bzero.c 		\
						ft_memcpy.c		\
						ft_isascii.c 	\
							ft_memchr.c \
							ft_calloc.c \
								ft_strdup.c \
								ft_substr.c \
								ft_strjoin.c \
								ft_strtrim.c

CC = cc
CFLAGS = -Wall -Wextra -Werror

#OBJDIR
OBJDIR = OBJS
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))
all: $(OBJDIR) $(NAME) 


#OBJS = $(SRCS:.c=.o)
#all: $(NAME)


#OBJDIR
$(OBJDIR):
	mkdir -p $(OBJDIR)


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	#object file を リンクするだけ（オブジェクトファイルをつなぎ合わせたライブラリを作ってるイメージ
	#ライブラリなので、実行できません）

#OBJDIR
$(OBJDIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	#object file の生成

#%.o: %.c
#	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re