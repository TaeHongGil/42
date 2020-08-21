/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <tgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 18:38:21 by tgil              #+#    #+#             */
/*   Updated: 2020/08/12 19:13:58 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	num[nb + 1];
	int	i;
	int	j;

	if (nb < 2)
		return (0);
	i = 0;
	while (i++ < nb + 1)
		num[i - 1] = 1;
	i = 1;
	while (i++ < nb + 1)
	{
		j = i + i;
		if (num[i] == 1)
		{
			while (j < nb + 1)
			{
				num[j] = 0;
				j += i;
			}
		}
	}
	return (num[nb]);
}
