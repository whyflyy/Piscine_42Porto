/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:10:10 by jcavadas          #+#    #+#             */
/*   Updated: 2023/08/29 14:39:20 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	i;
	int	temp;

	count = size;
	i = 0;
	while (i < count / 2)
	{
		temp = tab[count - 1];
		tab[count - 1] = tab[i];
		tab[i] = temp;
		count --;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tabela[] = {1,2,3,4,5};
	int	size = 5;
	int	tab;
	int	i;

	i = 0;
	//tab = &tabela;
	while(i < size)
	{
		printf("%d", tabela[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tabela, size);
	i = 0;
	while(i < size)
	{
		printf("%d", tabela[i]);
		i++;
	}

	return (0);
}
*/
