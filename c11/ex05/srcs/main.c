/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 13:05:27 by tgil              #+#    #+#             */
/*   Updated: 2020/08/21 12:44:19 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

int		calculation(char c, int n1, int n2)
{
	if (c == '+')
		return (n1 + n2);
	if (c == '-')
		return (n1 - n2);
	if (c == '*')
		return (n1 * n2);
	if (c == '/')
		return (n1 / n2);
	if (c == '%')
		return (n1 % n2);
	return (0);
}

int		calculation_check(char *c)
{
	if (*c == '+')
		return (1);
	if (*c == '-')
		return (1);
	if (*c == '*')
		return (1);
	if (*c == '/')
		return (1);
	if (*c == '%')
		return (1);
	if (ft_strlen(c) != 1)
		return (1);
	return (0);
}

int		check_num(char c, int n)
{
	if (c == '/' && n == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (1);
	}
	if (c == '%' && n == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int		n[2];
	char	b;
	int		num;

	if (argc != 4)
		return (0);
	n[0] = ft_atoi(argv[1]);
	n[1] = ft_atoi(argv[3]);
	b = argv[2][0];
	if (!(calculation_check(argv[2])) && write(1, "0\n", 2))
		return (0);
	if (check_num(b, n[1]))
		return (0);
	num = calculation(b, n[0], n[1]);
	ft_putnbr(num);
	write(1, "\n", 1);
	return (0);
}
