/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 13:23:32 by tgil              #+#    #+#             */
/*   Updated: 2020/08/15 14:08:32 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int count;

	count = 0;
	while (*src)
	{
		count++;
		src++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		count;
	char	*dest;
	int		i;

	count = ft_strlen(src);
	dest = (char *)malloc(count * sizeof(char) + 1);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
