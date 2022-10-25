/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okandemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:52:47 by okandemi          #+#    #+#             */
/*   Updated: 2022/08/02 14:52:49 by okandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i])
	{
	i++;
	}
	while (src[n] && (nb != 0))
	{
		dest[i] = src[n];
		n++;
		i++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
