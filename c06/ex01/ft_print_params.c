/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <tgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 20:36:00 by tgil              #+#    #+#             */
/*   Updated: 2020/08/15 13:05:43 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *c)
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

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write(1, &*argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}
