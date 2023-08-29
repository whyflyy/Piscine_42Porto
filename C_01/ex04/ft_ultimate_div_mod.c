/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:01:27 by jcavadas          #+#    #+#             */
/*   Updated: 2023/08/29 11:07:07 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	resto;

	div = *a / *b;
	resto = *a % *b;
	*a = div;
	*b = resto;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 3;
	printf("Inicio: a=%d, b=%d; \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Depois: a=%d, b=%d; \n", a, b);
	return (0);
}
*/
