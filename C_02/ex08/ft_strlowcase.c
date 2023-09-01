/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:36:39 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/01 11:38:18 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	str[] = "JOAO";

	printf("%s\n", ft_strlowcase(str));
	return (0);
}
*/
