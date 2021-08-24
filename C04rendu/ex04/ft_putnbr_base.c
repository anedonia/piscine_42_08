/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:44:13 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/15 13:47:10 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	check_char(char c)
{
	if (c < 32 || c >= 127 || c == '+' || c == '-')
		return (1);
	return (0);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if (check_char(str[i]))
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		baselen;

	nb = nbr;
	baselen = base_len(base);
	if (!check_base(base))
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= baselen)
	{
		ft_putnbr_base(nb / baselen, base);
		nb %= baselen;
	}
	write(1, &base[nb], 1);
}
