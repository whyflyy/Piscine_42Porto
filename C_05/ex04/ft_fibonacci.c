/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:08:18 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/07 11:27:03 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	n;
	int	res;

	if (argc != 2)
	{
		printf("Input nao aceite!");
		return (0);
	}
	n = atoi(argv[1]);
	res = ft_fibonacci(n);
	printf("O %d numero da sequencia de Fibonnaci e: %d\n", n, res);
	return (0);
}
