/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 21:29:40 by kelmounj          #+#    #+#             */
/*   Updated: 2023/09/30 22:16:29 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	j;

	ptr = (int *) malloc((max - min) * sizeof (int));
	if (!ptr)
		return (NULL);
	if (max <= min)
		return (NULL);
	j = 0;
	while (min < max)
	{
		ptr[j] = min;
		min++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
