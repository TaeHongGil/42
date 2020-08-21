/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 17:09:43 by tgil              #+#    #+#             */
/*   Updated: 2020/08/18 14:44:08 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		len(char *c)
{
	int	count;

	count = 0;
	while (*c)
	{
		c++;
		count++;
	}
	c = c - count;
	return (count);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char			c1;
	char			c2;
	unsigned int	i;

	c1 = *s1;
	c2 = *s2;
	i = 0;
	while (i < n)
	{
		c1 = *s1++;
		c2 = *s2++;
		if (c1 != c2)
		{
			return (c1 > c2 ? 1 : -1);
		}
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	len_str;
	int	len_find;

	len_str = len(str);
	len_find = len(to_find);
	if (!len_find)
		return (str);
	while (len_str >= len_find)
	{
		if (!(ft_strncmp(str, to_find, len_find)))
			return (str);
		len_str--;
		str++;
	}
	return (0);
}
