/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:17:58 by kelmounj          #+#    #+#             */
/*   Updated: 2023/10/01 18:33:05 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		j;
	int		size;

	if (min >= max)
	{
		(*range) = 0;
		return (0);
	}
	size = max - min;
	(*range) = (int *) malloc((size * 4) + 1);
	if ((*range) == 0)
		return (-1);
	j = 0;
	while (min < max)
	{
		(*range)[j] = min;
		min++;
		j++;
	}
	(*range)[j] = '\0';
	return (size);
}
