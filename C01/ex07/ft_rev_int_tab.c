/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okandemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:41:06 by okandemi          #+#    #+#             */
/*   Updated: 2022/07/26 19:46:01 by okandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		gcc;

	i = 0;
	while (i < size / 2)
	{
		gcc = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = gcc;
		i++;
	}
}
