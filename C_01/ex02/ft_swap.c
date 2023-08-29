/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 23:04:06 by jcavadas          #+#    #+#             */
/*   Updated: 2023/08/29 09:53:54 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	x;
	int	*temp;

	x = 0;
	temp = &x;
	*temp = *a;
	*a = *b;
	*b = *temp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 20;
	b = 42;
	ptra = &a;
	ptrb = &b;
	printf("Inicio: a=%d, b=%d; \n", a, b);
	ft_swap(ptra, ptrb);
	printf("Depois: a=%d, b=%d; \n", a, b);
	return (0);
}
*/
