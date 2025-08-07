/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:43:08 by kelmounj          #+#    #+#             */
/*   Updated: 2023/09/30 16:22:57 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

void	desplay_par(char **par, int size)
{
	int		i;

	i = 1;
	while (i < size)
	{
		ft_putstr(par[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*ptr;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				ptr = av[i];
				av[i] = av[j];
				av[j] = ptr;
			}
			j++;
		}
		i++;
	}
	desplay_par(av, ac);
	return (0);
}
