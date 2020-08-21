/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 13:15:05 by tgil              #+#    #+#             */
/*   Updated: 2020/08/04 12:37:30 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	char	b;

	b = nb / 10 + 48;
	c = nb % 10 + 48;
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_putnbr(i);
			write(1, " ", 1);
			ft_putnbr(j);
			if (i == 98 && j == 99)
			{
				break ;
			}
			write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
