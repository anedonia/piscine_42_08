/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:28:56 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/24 16:42:13 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_valid(char c);
int	check_b(char *str);
int	is_base(char c, char *base);
int	base_len(char *str);
int	ft_atoi_base(char *str, char *base);

int	str_size(int nbr, int base)
{
	int	i;
	int	j;

	j = 0;
	if (nbr < 0 || nbr == 0)
		j = 1;
	i = 0;
	while (nbr > 0)
	{
		i++;
		nbr /= base;
	}
	return (i + j + 1);
}

void	nbr_build(char *str, long nb, int baselen, char *base)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = 0;
	if (nb == 0)
	{
		str[i] = base[nb % baselen];
		i++;
	}
	while (nb > 0)
	{
		str[i] = base[nb % baselen];
		nb /= baselen;
		i++;
	}
	str[i] = '\0';
	while (--i >= j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j++;
	}
}

char	*ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		baselen;
	char	*str;
	int		i;

	i = 0;
	str = malloc(str_size(nbr, base_len(base) * sizeof(*str)));
	nb = nbr;
	baselen = base_len(base);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
		i++;
	}
	nbr_build(&str[i], nb, baselen, base);
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	ten_nbr;
	char	*converted_nbr;

	if (!check_b(base_from) || !check_b(base_to))
		return (0);
	ten_nbr = ft_atoi_base(nbr, base_from);
	converted_nbr = ft_putnbr_base(ten_nbr, base_to);
	return (converted_nbr);
}
int main (int argc, char *argv[])
{
	printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}
