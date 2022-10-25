/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okandemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:56:07 by okandemi          #+#    #+#             */
/*   Updated: 2022/07/31 17:56:15 by okandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strcapitalize(char *str)
{
	int		i;
	int		next;
	char	c;

	i = 0;
	next = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (next == 1 && c >= 'a' && <= 'z')
			str[i] -= 32;
		else if (next == 0 && c >= 'A' && <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}
