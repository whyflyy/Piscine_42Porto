/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:48:36 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/01 11:33:15 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
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
	char	str[] = "joao";

	printf("%s\n", ft_strupcase(str));
	return (0);
}
*/
