/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 14:37:47 by tgil              #+#    #+#             */
/*   Updated: 2020/08/19 22:25:48 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int g_i;
int g_j;

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

int		check_set(char *str, char *charset)
{
	while (*str)
	{
		g_i = 0;
		while (g_i++ < ft_strlen(charset))
			if (*str == charset[g_i - 1])
				break ;
		if (g_i - 1 == ft_strlen(charset))
			break ;
		str++;
	}
	if (*str == '\0')
		return (0);
	while (*str)
	{
		g_i = 0;
		while (g_i++ < ft_strlen(charset))
			if (*str == charset[g_i - 1])
				break ;
		if (g_i - 1 != ft_strlen(charset))
			break ;
		str++;
	}
	if (*str == '\0')
		return (1);
	return (1 + check_set(str, charset));
}

int		ft_len(char *str, char *charset)
{
	int	len;
	int	count;
	int i;

	len = ft_strlen(charset);
	count = 0;
	while (*str)
	{
		i = 0;
		while (i < len)
		{
			if (*str == charset[i])
				break ;
			i++;
		}
		if (i == len)
			count++;
		else
			break ;
		str++;
	}
	return (count);
}

int		check(char *str, char *charset)
{
	int i;

	while (*str)
	{
		i = 0;
		while (i++ < ft_strlen(charset))
			if (*str == charset[i - 1])
				return (0);
		if (i - 1 == ft_strlen(charset))
			break ;
		str++;
	}
	if (ft_strlen(str) == 0)
		return (0);
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**temp;
	int		count;
	int		len;

	count = check_set(str, charset);
	if (count == 0 && check(str, charset))
		count = 1;
	temp = (char **)malloc(count * sizeof(char *) + 1);
	g_i = 0;
	while (g_i < count)
	{
		if ((len = ft_len(str, charset)) != 0)
		{
			temp[g_i] = (char *)malloc(len * sizeof(char) + 1);
			g_j = 0;
			while (g_j++ < len)
				temp[g_i][g_j - 1] = *str++;
			temp[g_i][g_j - 1] = '\0';
			g_i++;
		}
		str++;
	}
	temp[g_i] = 0;
	return (temp);
}
