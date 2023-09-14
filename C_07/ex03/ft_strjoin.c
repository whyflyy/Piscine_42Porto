/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:01:40 by jcavadas          #+#    #+#             */
/*   Updated: 2023/09/13 10:48:24 by jcavadas         ###   ########.fr       */
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

char	*create_str(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	if (size <= 0)
		len = 1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = create_str(size, strs, sep);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			str[k++] = sep[j];
			j++;
		}
	}
	str[k] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*res;

	res = ft_strjoin(argc, argv, ", ");
	printf("%s\n", res);
	return (0);
}*/
