/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <tgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 21:53:34 by tgil              #+#    #+#             */
/*   Updated: 2020/08/12 15:05:57 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		set_int(int num, int count)
{
	while (count)
	{
		num *= -1;
		count--;
	}
	return (num);
}

int		base_num(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int	count;
	int	num;

	if (!(base_check(base)))
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	count = 0;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			count++;
		str++;
	}
	num = 0;
	while (base_num(*str, base) != -1)
	{
		num = num * ft_strlen(base) + base_num(*str, base);
		str++;
	}
	return (set_int(num, count));
}
