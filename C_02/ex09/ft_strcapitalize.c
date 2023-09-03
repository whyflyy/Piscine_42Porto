/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:44:29 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/03 12:27:45 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	else if (str[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') || 
				(str[i - 1] >= 'A' && str[i - 1] <= 'Z')) && 
			(str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && i != 0)
			str[i] = str[i] + 32;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}
/*
//#include <stdio.h>
int	main(void)
{
	char	str[] = "ola+estou-MUITO cAnSaDo!";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/
