/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 09:55:22 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/04 10:59:04 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	dest[50] = "ola";

	if (argc != 2)
	{
		printf("Input nao aceite!");
		return (0);
	}
	printf("Ft_strcat: %s\n", ft_strcat(dest, argv[1]));
	return (0);
}*/
