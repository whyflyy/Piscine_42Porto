/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:46:43 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/07 11:05:08 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if ((power - 1) > 0)
		return (nb *= ft_recursive_power(nb, power - 1));
	else 
		return (nb);
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
	res = ft_recursive_power(atoi(argv[1]), atoi(argv[2]));
	printf("O resultado e: %d\n", res);
	return (0);
}*/
