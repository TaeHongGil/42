/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 14:19:26 by tgil              #+#    #+#             */
/*   Updated: 2020/08/18 18:50:31 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;
	int	i;
	int	*temp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	count = max - min;
	if ((temp = malloc((count * sizeof(int)))) == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = temp;
	i = 0;
	while (i < count)
	{
		temp[i] = min + i;
		i++;
	}
	return (count);
}
