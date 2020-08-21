/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 14:09:12 by tgil              #+#    #+#             */
/*   Updated: 2020/08/15 14:31:37 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *num;
	int count;
	int i;

	if (min >= max)
		return (0);
	count = max - min;
	num = (int *)malloc(count * sizeof(int));
	i = 0;
	while (i < count)
	{
		num[i] = min + i;
		i++;
	}
	return (num);
}
