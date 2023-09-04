/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:59:42 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/04 11:30:40 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && nb > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		nb--;
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
	printf("Ft_strncat: %s\n", ft_strncat(dest, argv[1], 5));
	return (0);
}*/
