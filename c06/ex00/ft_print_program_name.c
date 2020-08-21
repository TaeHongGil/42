/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <tgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 20:36:00 by tgil              #+#    #+#             */
/*   Updated: 2020/08/16 13:16:06 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int count;
	int i;

	if (argc > 0)
	{
		count = 0;
		i = 0;
		while (argv[0][i])
		{
			count++;
			i++;
		}
		write(1, &*argv[0], count);
		write(1, "\n", 1);
	}
}
