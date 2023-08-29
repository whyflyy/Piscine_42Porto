/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:21:22 by jcavadas          #+#    #+#             */
/*   Updated: 2023/08/29 15:57:46 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	
	/*int	count;
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
	}*/
}

#include <stdio.h>

int	main(void)
{
	int	tabela[] = {5,4,3,2,1};
	int	size = 5;
	int	tab;
	int	i;

	i = 0;
	while(i < size)
	{
		printf("%d", tabela[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tabela, size);
	i = 0;
	while(i < size)
	{
		printf("%d", tabela[i]);
		i++;
	}

	return (0);
}
