/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 18:30:22 by tgil              #+#    #+#             */
/*   Updated: 2020/08/21 10:05:37 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	g_tab;

void	print_memory(unsigned int num)
{
	if (num == 0)
		return ;
	print_memory(num / 16);
	write(1, &"0123456789abcdef"[num % 16], 1);
}

void	hex_print(unsigned int num)
{
	unsigned int	n;

	n = num;
	while (n != 0)
	{
		n = n / 16;
		write(1, "0", 1);
	}
	print_memory(num);
	write(1, ": ", 2);
}

void	c_hex_print(void *addr, unsigned int count)
{
	unsigned char	c;
	unsigned int	i;

	g_tab = 0;
	i = 0;
	while (i < count)
	{
		c = *(unsigned char *)addr;
		write(1, &"0123456789abcdef"[c / 16], 1);
		write(1, &"0123456789abcdef"[c % 16], 1);
		g_tab = g_tab + 2;
		if (i % 2 == 1)
		{
			write(1, " ", 1);
			g_tab++;
		}
		i++;
		addr++;
	}
}

void	str_print(void *addr, unsigned int count)
{
	unsigned char	c;
	unsigned int	i;

	i = 0;
	if (count < 16)
		while (i < 41 - g_tab - 1)
		{
			write(1, " ", 1);
			i++;
		}
	i = 0;
	while (i < count)
	{
		c = *(unsigned char *)addr;
		if (!(c <= 126 && c >= ' '))
			write(1, ".", 1);
		else
			write(1, &c, 1);
		i++;
		addr++;
	}
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	num;
	int				count;

	while (size != 0)
	{
		if (size / 16 > 0)
			count = 16;
		else
			count = size % 16;
		num = (unsigned int)addr;
		hex_print(num);
		c_hex_print(addr, count);
		str_print(addr, count);
		write(1, "\n", 1);
		addr = addr + count;
		size = size - count;
	}
}
