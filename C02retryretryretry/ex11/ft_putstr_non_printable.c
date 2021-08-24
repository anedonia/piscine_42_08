/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:29:51 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/11 13:57:55 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	to_hex(unsigned char c)
{
	char	*tab_char;

	tab_char = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &tab_char[(c / 16)], 1);
	write(1, &tab_char[(c % 16)], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
			to_hex(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
