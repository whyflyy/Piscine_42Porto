/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:44:29 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/01 12:05:42 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '/')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
			i++;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && i != 0)
		{
			str[i] = str[i] + 32;
		}
		else
		{
			str[i] = str[i];
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Ola+estou-MUITO cAnSaDo!";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
*/
