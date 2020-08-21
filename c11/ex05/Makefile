# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgil <kf08@naver.com>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/19 14:25:50 by tgil              #+#    #+#              #
#    Updated: 2020/08/21 12:42:59 by tgil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putnbr.c srcs/ft_atoi.c srcs/main.c
OBJS	= $(SRCS:.c=.o)
INCS	= includes
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
TARGET	= do-op

all: $(TARGET)

.c.o:
	${CC} $(CFLAGS) -c $< -o $@ -I${INCS}

$(TARGET): $(OBJS)
	${CC} $(CFLAGS) $^ -o $(TARGET) -I${INCS}

clean:
	rm -f $(OBJS)

fclean: clean   
	rm -f $(TARGET)

re: fclean all
