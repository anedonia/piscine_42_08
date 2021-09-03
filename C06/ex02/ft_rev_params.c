/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:16:22 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/17 14:35:54 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		write(1, str + i, 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	while (--argc > 0)
	{
		ft_putstr(argv[argc]);
		write(1, "\n", 1);
	}
}
