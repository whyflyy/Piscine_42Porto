/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:20:34 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/11 19:43:57 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	else
	{
		i = -1;
		while (++i < max - min)
			tab[i] = min + i;
		*range = tab;
		return (i);
	}
}
/*
int	main(int argc, char **argv)
{
	int	min;
	int	max;
	int	**arr;
	int	*arr1;
	int	i;

	(void) argc;
	i = 0;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	arr = &arr1;
	printf("%d\n", ft_ultimate_range(arr, min, max));
	while (i < max - min)
	{
		printf("%d\n", arr1[i]);
		i++;
	}
	return (0);
}*/
