/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okandemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:38:53 by okandemi          #+#    #+#             */
/*   Updated: 2022/07/30 19:41:46 by okandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		r;

	r = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			r = 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			r = 1;
		}
		else
		{
			r = 0;
			break ;
		}
		i++;
	}
	return (r);
}
