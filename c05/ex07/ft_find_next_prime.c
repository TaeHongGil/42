/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <tgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 18:38:21 by tgil              #+#    #+#             */
/*   Updated: 2020/08/20 09:39:44 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_prime(int nb)
{
	int i;
	int num;

	if (nb < 2)
		return (0);
	i = 2;
	num = nb / 2;
	while (i <= num && i <= 65536)
	{
		if (nb % i == 0)
			return (is_prime(nb + 1));
		i++;
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	return (is_prime(nb));
}
