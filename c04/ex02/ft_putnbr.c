/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 00:02:33 by kelmounj          #+#    #+#             */
/*   Updated: 2023/09/25 00:15:25 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr_rec(long nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		putnbr_rec(nbr / 10);
	}
	ft_putchar('0' + nbr % 10);
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		putnbr_rec((long)INT_MIN);
	}
	else 
		putnbr_rec(nb);
}
