/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <tgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 21:20:38 by tgil              #+#    #+#             */
/*   Updated: 2020/08/21 04:06:59 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		base_check(char *base);

int		ft_strlen(char *str);

int		int_count(int nbr, int len_base);

char	*ft_putnbr_base1(int nbr, char *base, char *temp)
{
	int	len_base;
	int	count;
	int	n;

	n = nbr;
	len_base = ft_strlen(base);
	count = int_count(nbr, len_base);
	temp = (char *)malloc(count * sizeof(char) + 1);
	temp[count] = '\0';
	count--;
	while (count >= 0)
	{
		temp[count] = base[n % len_base];
		n /= len_base;
		count--;
	}
	return (temp);
}

char	*ft_putnbr_base2(int nbr, char *base, char *temp)
{
	int	len_base;
	int	count;
	int	n;

	nbr *= -1;
	n = nbr;
	len_base = ft_strlen(base);
	count = int_count(nbr, len_base);
	temp = (char *)malloc(count * sizeof(char) + 2);
	temp[count + 1] = '\0';
	while (count > 0)
	{
		temp[count] = base[n % len_base];
		n /= len_base;
		count--;
	}
	temp[count] = '-';
	return (temp);
}

int		ft_atoi_base(char *str, char *base, int check)
{
	int		num;
	int		i;

	num = 0;
	while (*str)
	{
		i = 0;
		while (base[i] != '\0')
		{
			if (*str == base[i])
				break ;
			i++;
		}
		if (base[i] == '\0')
			break ;
		num = num * ft_strlen(base) + i;
		str++;
	}
	return (num * check);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		check;
	int		num;
	char	*temp;

	if (!(base_check(base_from)) || !(base_check(base_to)))
		return (0);
	check = 1;
	while ((*nbr >= 9 && *nbr <= 13) || *nbr == 32)
		nbr++;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			check *= -1;
		nbr++;
	}
	temp = NULL;
	num = ft_atoi_base(nbr, base_from, check);
	if (num >= 0)
		temp = ft_putnbr_base1(num, base_to, temp);
	else
		temp = ft_putnbr_base2(num, base_to, temp);
	return (temp);
}
