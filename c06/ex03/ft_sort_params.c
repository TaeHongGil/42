/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <tgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 20:36:00 by tgil              #+#    #+#             */
/*   Updated: 2020/08/21 00:29:25 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *c)
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

int		main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	while (i++ < argc)
	{
		j = i;
		while (j++ < argc)
		{
			if (ft_strcmp(argv[i - 1], argv[j - 1]) == 1)
				ft_swap(&argv[i - 1], &argv[j - 1]);
		}
	}
	i = 1;
	while (i++ < argc)
	{
		write(1, &*argv[i - 1], ft_strlen(argv[i - 1]));
		write(1, "\n", 1);
	}
}
