/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:51:35 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/07 11:58:41 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	exp;

	exp = 1;
	if (nb > 0)
	{
		while (exp * exp <= nb)
		{
			if (exp * exp == nb)
				return (exp);
			if (exp > 46340)
				return (0);
			exp++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int res;

	if (argc != 2)
	{
		printf("Input nao aceite!");
		return (0);
	}
	res = ft_sqrt(atoi(argv[1]));
	printf("A raiz quadrada de %d e: %d\n", atoi(argv[1]), res);
	return (0);
}*/
