/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:54:01 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/07 13:17:54 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (i < nb)
	{
		if ((nb % i) == 0)
		{
			nb++;
			i = 2;
		}
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	res;

	if (argc != 2)
	{
		printf("Input nao aceite!");
		return (0);
	}
	res = ft_find_next_prime(atoi(argv[1]));
	printf("O numero primo seguinte e: %d\n", res);
	return (0);
}*/
