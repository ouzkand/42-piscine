/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okandemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:12:19 by okandemi          #+#    #+#             */
/*   Updated: 2022/07/23 15:57:11 by okandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		gcc;
	int		bas;
	int		b;
	char	yaz;

	bas = 1;
	b = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	gcc = nb;
	while (gcc > 10)
	{
		gcc = gcc / 10;
		bas *= 10;
	}
	while (bas > 0)
	{
		yaz = (nb / bas) + '0';
		write(1, &yaz, 1);
		nb = nb % bas;
		bas /= 10;
	}
}
