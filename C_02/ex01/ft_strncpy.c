/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:05:42 by jcavadas          #+#    #+#             */
/*   Updated: 2023/08/31 18:37:34 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else if (src[i] == '\0')
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[5] = "Joao";
	char	dest[5];

	printf("%s\n", ft_strncpy(dest, src, 5));
	return (0);
}
*/
