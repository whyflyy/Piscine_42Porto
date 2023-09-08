/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:11:04 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/08 12:23:21 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[i] = min;
		min++;
		printf("Array[%d]: %d\n", i, array[i]);
		i++;
	}
	return (array);
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_range(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
