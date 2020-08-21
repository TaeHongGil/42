/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 14:10:41 by tgil              #+#    #+#             */
/*   Updated: 2020/08/21 14:17:06 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **tab, int i, int j)
{
	char *temp;

	temp = tab[i];
	tab[i] = tab[j];
	tab[j] = temp;
}

int		ft_strlen(char **c)
{
	int count;

	count = 0;
	while (c[count])
		count++;
	return (count);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int check;
	int tab_len;

	tab_len = ft_strlen(tab);
	while (1)
	{
		i = 0;
		check = 1;
		while (i < tab_len - 1)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				ft_swap(tab, i, i + 1);
				check = 0;
			}
			i++;
		}
		if (check)
			break ;
	}
}
