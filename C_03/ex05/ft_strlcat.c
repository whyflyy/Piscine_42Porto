/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:48:22 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/05 09:55:35 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;//destlen
	unsigned int	j;//strlen
	unsigned int 	x;

	i = 0;
	j = 0;
	x = 0;
	while (i < size && dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	unsigned int	as = size - i;
	if (as == 0)
		return (i - j);

	while (x < as - 1 && src[i] != '\0')
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';
	return (i + j);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Input nao aceite!");
		return (0);
	}
	char dest[] = "Ola";
	printf("%d\n", ft_strlcat(dest, argv[2], (atoi(argv[3]))));
	printf("%s\n", dest);
	return (0);
}
