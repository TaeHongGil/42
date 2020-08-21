/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 14:32:37 by tgil              #+#    #+#             */
/*   Updated: 2020/08/03 15:09:21 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_count;
int g_a;

void	print(char *c, int n)
{
	write(1, c, n);
}

void	set_c(char *c, int n)
{
	int i;

	i = 0;
	while (i != n)
	{
		c[i] = i + 48;
		i++;
	}
}

void	a_check(char *c, int n)
{
	int i;

	i = 0;
	while (i != n)
	{
		if (c[i] == '9')
		{
			g_count = i;
		}
		else
		{
			g_count = -1;
		}
		if (g_count != -1)
		{
			g_a = 1;
			break ;
		}
		i++;
	}
}

void	set_num(char *c, int n)
{
	int i;

	if (g_count != -1)
	{
		c[g_count - 1] = c[g_count - 1] + 1;
		i = g_count;
		while (i != n)
		{
			c[i] = c[i - 1] + 1;
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	c[n];

	set_c(c, n);
	while (c[0] != 10 - n + 48)
	{
		g_a = 0;
		print(c, n);
		while (1)
		{
			a_check(c, n);
			set_num(c, n);
			if (c[n - 1] == '9' || g_count == -1)
			{
				break ;
			}
		}
		if (g_a == 0)
		{
			c[n - 1] = c[n - 1] + 1;
		}
		write(1, ", ", 2);
	}
	print(c, n);
}
