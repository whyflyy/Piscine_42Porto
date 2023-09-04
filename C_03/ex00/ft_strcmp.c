/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:09:58 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/03 12:57:48 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	if (s2[i] != '\0')
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Input nao aceite!\n");
		return (0);
	}
	printf("O resultado do strcmp normal e: %d\n", strcmp(argv[1], argv[2]));
	printf("O resultado do ft_strcmp e: %d\n", ft_strcmp(argv[1], argv[2]));
	return (0);
}*/
