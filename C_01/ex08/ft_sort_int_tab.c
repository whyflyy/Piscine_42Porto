/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:21:22 by jcavadas          #+#    #+#             */
/*   Updated: 2023/08/30 14:36:18 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] >= tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tabela[] = {7,4,5,9,2};
	int	size = 5;
	int	i;

	i = 0;
	printf("Antes da funcao: ");
	while(i < size)
	{
		printf("%d", tabela[i]);
		i++;
	}
	printf("\nDepois da funcao: ");
	ft_sort_int_tab(tabela, size);
	i = 0;
	while(i < size)
	{
		printf("%d", tabela[i]);
		i++;
	}

	return (0);
}
*/
