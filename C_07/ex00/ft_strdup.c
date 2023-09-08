/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:21:20 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/08 12:10:11 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char	*str;

	i = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * i);
	if(!(str))
		return (NULL);
	return (ft_strcpy(str, src));
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", ft_strdup(argv[1]));
	return (0);
}*/
