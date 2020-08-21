/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 14:17:24 by tgil              #+#    #+#             */
/*   Updated: 2020/08/04 14:57:40 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_up(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] = str[i] + 32;
	}
}

void	check_low(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
}

int		check(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		return (0);
	}
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		return (0);
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	check_low(str, i);
	i++;
	while (str[i] != '\0')
	{
		if (check(str, i - 1))
		{
			check_low(str, i);
		}
		else
		{
			check_up(str, i);
		}
		i++;
	}
	return (str);
}
