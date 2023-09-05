/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:41:37 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/05 13:09:22 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		divisor;
	char	digit;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	divisor = 1;
	while (nb / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = '0' + (nb / divisor);
		write (1, &digit, 1);
		nb %= divisor;
		divisor /= 10;
	}
}
/*
int main(void)
{
	ft_putnbr(42);
	write (1, "\n", 1);
	ft_putnbr(69);
	write (1, "\n", 1);
	ft_putnbr(330);
	write (1, "\n", 1);
	ft_putnbr(41223456);
	write (1, "\n", 1);
	ft_putnbr(32);
	write (1, "\n", 1);
	ft_putnbr(-420);
	write (1, "\n", 1);
	ft_putnbr(123456890);
	write (1, "\n", 1);
	ft_putnbr(-99882200);
	write (1, "\n", 1);
	return (0);
}*/
