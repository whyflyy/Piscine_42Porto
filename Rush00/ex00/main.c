/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvieira- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:16:00 by cvieira-          #+#    #+#             */
/*   Updated: 2023/08/26 10:57:34 by cvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);

int	char_int(char *argv)
{
	int index;
	int result;
	
	index = 0;
	result =0;
	while (argv[index] != '\0')
	{
		result = result * 10;
		result = result + (argv[index] - 48);
		index++;
	}
	return(result);
}
		  

int	main(int argc, char *argv[])
{
	if (argc < 3)
	{
		return(1);
	}
	int x;
	int y;
	
	x = char_int(argv[1]);
	y = char_int(argv[2]);
	 
	rush(x, y);
	return (0);
}

