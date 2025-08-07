/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 22:02:25 by kelmounj          #+#    #+#             */
/*   Updated: 2023/10/04 22:05:51 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	d_len = 0;
	while (dest[d_len] && d_len < size)
	{
		d_len++;
	}
	s_len = 0;
	while (src[s_len])
	{
		s_len++;
	}
	i = 0;
	while (src[i] && d_len + i + 1 < size)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	if (d_len < size)
	{
		dest[d_len + i] = '\0';
	}
	return (d_len + s_len);
}
