/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 12:37:07 by tgil              #+#    #+#             */
/*   Updated: 2020/08/03 13:02:17 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(char i, char j, char x)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &x, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	x;

	i = '0';
	while (i != '8')
	{
		j = i + 1;
		while (j != '9')
		{
			x = j + 1;
			while (x != '9' + 1)
			{
				write_num(i, j, x);
				if (i == '7' && j == '8' && x == '9')
				{
					break ;
				}
				write(1, ", ", 2);
				x++;
			}
			j++;
		}
		i++;
	}
}
