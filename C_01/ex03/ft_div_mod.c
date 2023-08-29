/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:36:31 by jcavadas          #+#    #+#             */
/*   Updated: 2023/08/29 09:56:07 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	int	divi;
	int	resto;
	
	divi = 0;
	resto = 0;
	div = &divi;
	mod = &resto;
	a = 23;
	b = 3;
	printf("Inicio: a=%d, b=%d, divi=%d, resto=%d; \n", a, b,divi,resto);
	ft_div_mod(a, b, div, mod);
	printf("Inicio: a=%d, b=%d, divi=%d, resto=%d; \n", a, b,divi,resto);
	return (0);
}
*/
