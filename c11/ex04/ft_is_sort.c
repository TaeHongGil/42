/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 10:56:11 by tgil              #+#    #+#             */
/*   Updated: 2020/08/21 13:22:47 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int count1;
	int count2;

	if (length == 0)
		return (1);
	count1 = 0;
	count2 = 0;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			count1++;
		if (f(tab[i], tab[i + 1]) >= 0)
			count2++;
		i++;
	}
	if (count1 != length - 1 && count2 != length - 1)
		return (0);
	return (1);
}
