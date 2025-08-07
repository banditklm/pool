/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:14:02 by kelmounj          #+#    #+#             */
/*   Updated: 2023/09/25 16:26:50 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	fact = 1;
	i = nb;
	if (nb == 1)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	while (i > 1)
	{
		fact = fact * i;
		i--;
	}
	return (fact);
}
