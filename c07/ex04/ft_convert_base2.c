/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <tgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 21:20:38 by tgil              #+#    #+#             */
/*   Updated: 2020/08/20 11:42:59 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		int_count(int nbr, int len_base)
{
	int count;

	count = 0;
	if (nbr == 0)
		count = 1;
	while (nbr != 0)
	{
		nbr /= len_base;
		count++;
	}
	return (count);
}

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
