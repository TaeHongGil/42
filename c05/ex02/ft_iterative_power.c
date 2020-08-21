/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <tgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 11:20:29 by tgil              #+#    #+#             */
/*   Updated: 2020/08/12 14:14:20 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int num;

	num = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power - 1)
	{
		nb *= num;
		power--;
	}
	return (nb);
}
