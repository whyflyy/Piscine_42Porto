/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:13:04 by jcavadas          #+#    #+#             */
/*   Updated: 2023/08/28 17:59:40 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	j = 00;
	while (j < 99)
	{
		i = j +1;
		while (i <= 99)
		{
			ft_putchar (j / 10 + '0');
			ft_putchar (j % 10 + '0');
			write (1, " ", 1);
			ft_putchar (i / 10 + '0');
			ft_putchar (i % 10 + '0');
			if (!(j == 98 && i == 99))
			{
				write (1, ", ", 1);
			}
			i++;
		}
		j++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return(0);
}
*/
