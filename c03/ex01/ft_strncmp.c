/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <tgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 17:08:11 by tgil              #+#    #+#             */
/*   Updated: 2020/08/12 20:27:06 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *s1 && *s2)
	{
		if (*s1 != *s2)
		{
			if (*s1 > *s2)
				return (1);
			else
				return (-1);
		}
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	if (*s1 > *s2)
		return (1);
	return (-1);
}