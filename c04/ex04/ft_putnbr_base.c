/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 21:53:34 by tgil              #+#    #+#             */
/*   Updated: 2020/08/10 19:33:44 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		base_check(char *base)
{
	char	c;
	int		count;
	char	*temp;

	count = 0;
	while (*base)
	{
		c = *base;
		if (c == '-' || c == '+')
			return (0);
		if ((c >= 9 && c <= 13) || c == 32)
			return (0);
		temp = base + 1;
		while (*temp)
		{
			if (c == *temp)
				return (0);
			temp++;
		}
		count++;
		base++;
	}
	if (count <= 1)
		return (0);
	return (1);
}

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	if (!(base_check(base)))
		return ;
	len_base = ft_strlen(base);
	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / len_base, base);
		write(1, &base[-(nbr % len_base)], 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base(-nbr, base);
		return ;
	}
	if (nbr < len_base)
		write(1, &base[nbr], 1);
	else
	{
		ft_putnbr_base(nbr / len_base, base);
		write(1, &base[nbr % len_base], 1);
		return ;
	}
}
