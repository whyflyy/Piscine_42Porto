/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:50:03 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/04 09:53:14 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if ((s1[i] == s2[i]) && s1[i] != '\0')
			i++;
		else
			return (s1[i] - s2[i]);
	}
	if (s2[i] != '\0') 
	{
		return (s1[i] - s2[i]);
	}
	if (s1[i] == '\0')
		return (0);
	else
		return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Input nao aceite!");
		return (0);
	}
	printf("Strncmp normal: %d\n", strncmp(argv[1], argv[2], 5));
	printf("Ft_strncmp: %d\n", ft_strncmp(argv[1], argv[2], 5));
}*/
