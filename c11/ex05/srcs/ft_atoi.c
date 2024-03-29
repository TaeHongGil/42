/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 19:10:53 by tgil              #+#    #+#             */
/*   Updated: 2020/08/06 19:52:06 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int count;
	int num;

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
	while (*str >= 48 && *str <= 57)
	{
		num = (num * 10) + (*str - 48);
		str++;
	}
	while (count)
	{
		num *= -1;
		count--;
	}
	return (num);
}
