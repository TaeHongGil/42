/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 14:32:49 by tgil              #+#    #+#             */
/*   Updated: 2020/08/18 14:37:06 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*temp;
	int		count;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	i = 0;
	count = 0;
	while (i++ < size)
		count += ft_strlen(strs[i - 1]);
	count += ft_strlen(sep) * (size - 1);
	if (!(temp = (char *)malloc(count * sizeof(char) + 1)))
		return (0);
	*temp = '\0';
	i = 0;
	while (1)
	{
		ft_strcat(temp, strs[i]);
		if (i == size - 1)
			break ;
		ft_strcat(temp, sep);
		i++;
	}
	return (temp);
}
