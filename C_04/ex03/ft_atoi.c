/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:30:16 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/06 00:35:29 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	numberz(int *nb, int *i, char *stri)
{
	*nb *= 10;
	*nb += *stri - '0';
	*i = *i + 1;
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	nop;

	nop = 1;
	i = 0;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nop *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numberz(&nb, &i, &str[i]);
	}
	i++;
	nb *= nop;
	return (nb);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{	
	if (argc != 2)
	{
		printf("Input nao aceite!");
		return (0);
	}
	printf("%d \n", ft_atoi(argv[1]));	
	return (0);
}*/
