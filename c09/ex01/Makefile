# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgil <kf08@naver.com>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/19 14:25:50 by tgil              #+#    #+#              #
#    Updated: 2020/08/19 15:37:28 by tgil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS	= $(SRCS:.c=.o)
INCS	= includes
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
TARGET	= libft.a

all: $(TARGET)

.c.o:
	${CC} $(CFLAGS) -c $< -o $@ -I$(INCS)

$(TARGET): $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $@

clean:
	rm -f $(OBJS)

fclean: clean   
	rm -f $(TARGET)

re: fclean all
