/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:12:14 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/06 22:19:01 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb >= 1)
	{
		return (nb *= ft_recursive_factorial(nb -1));
	}
	else
	{
		return (1);
	}
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
	res = ft_recursive_factorial(atoi(argv[1]));
	printf("O fatorial do numero dado e: %d\n", res);
}*/
