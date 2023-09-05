/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:33:34 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/04 12:58:19 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[i] || to_find[x] =='\0')
			x++;
		else
			x = 0;
		i++;
	}
	if (x == 0)
		return ("NULL");
	else
		return (&str[i - x]);
}

#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Input invalido!");
		return (0);
	}
	//printf("Strstr normal: %s\n", strstr(argv[1], argv[2]));
	printf("Ft_trstr: %s\n", ft_strstr(argv[1], argv[2]));
	return (0);
}
