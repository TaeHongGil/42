/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 00:25:57 by tgil              #+#    #+#             */
/*   Updated: 2020/08/21 12:48:12 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char **c)
{
	int count;

	count = 0;
	while (*c)
	{
		c++;
		count++;
	}
	return (count);
}

int		ft_strcmp(char *s1, char *s2)
{
	char	c1;
	char	c2;

	c1 = *s1;
	c2 = *s2;
	while (c1 != '\0' || c2 != '\0')
	{
		c1 = *s1++;
		c2 = *s2++;
		if (c1 != c2)
		{
			return (c1 > c2 ? 1 : -1);
		}
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		tab_len;

	tab_len = ft_strlen(tab);
	i = 0;
	while (i++ < tab_len)
	{
		j = i;
		while (j++ < tab_len)
		{
			if (ft_strcmp(tab[i - 1], tab[j - 1]) == 1)
				ft_swap(&tab[i - 1], &tab[j - 1]);
		}
	}
}
