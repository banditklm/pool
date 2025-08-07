/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:31:16 by kelmounj          #+#    #+#             */
/*   Updated: 2023/10/01 18:36:23 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	get_length(char **strs, int size, char *sep)
{
	int		i;
	int		length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
		if (i < size)
			length += ft_strlen(sep);
	}
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		length;
	char	*dest;

	i = 0;
	length = get_length(strs, size, sep);
	dest = (char *)malloc(length * sizeof(char) + 1);
	if (!dest)
		return (0);
	dest[0] = '\0';
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		i++;
		if (i < size)
		{
			ft_strcat(dest, sep);
		}
	}
	return (dest);
}
