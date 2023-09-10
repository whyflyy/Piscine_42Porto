/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:00:15 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/06 22:05:13 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ft;
	int	nb1;

	nb1 = nb;
	ft = nb -1;
	while (ft > 0)
	{
		nb1 = nb1 * ft;
		ft--;
	}
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		return (0);
	}
	return (nb1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	fact;

	if (argc != 2)
	{
		printf("Input nao aceite!");
		return (0);
	}
	fact = ft_iterative_factorial(atoi(argv[1]));
	printf("O fatorial do numero dado e: %d\n", fact); 
	return (0);
}*/
