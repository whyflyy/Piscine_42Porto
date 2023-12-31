/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:27:52 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/06 22:39:08 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power < 0)
		return (0);
	while (power > 0)
	{
		res *= nb;
		power --;
	}
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	res;

	if (argc != 3)
	{
		printf("Input nao aceite!");
		return (0);
	}
	res = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
	printf("O resultado e: %d\n", res);
	return (0);
}*/
