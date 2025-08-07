/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:27:17 by kelmounj          #+#    #+#             */
/*   Updated: 2023/10/03 14:39:41 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	ptr = (char *)malloc(i * sizeof(char) + 1);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

t_stock_str	ft_charge(char *str)
{
	t_stock_str	stock;

	stock.size = ft_strlen(str);
	stock.str = str;
	stock.copy = ft_strdup(str);
	return (stock);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	i = 0;
	stock = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!stock)
		return (NULL);
	while (i < ac)
	{
		stock[i] = ft_charge(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
