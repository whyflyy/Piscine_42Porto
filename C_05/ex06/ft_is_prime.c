/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:59:17 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/07 12:52:52 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (i < nb)
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Input nao aceite!");
		return (0);
	}
	printf("%d\n", ft_is_prime(atoi(argv[1])));
	return (0);
}*/
