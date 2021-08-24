/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:25:02 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/21 14:22:50 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(char c)
{
	if ((c >= 9 && c <= 13) || c == '-' || c == '+' || c == ' ')
		return (1);
	return (0);
}

int	check_b(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if (is_valid(str[i]))
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str [j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	base_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signe;
	int	nb;

	nb = 0;
	signe = 1;
	i = 0;
	if (!check_b(base))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (is_base(str[i], base) >= 0)
	{
		nb = (nb * base_len(base)) + is_base(str[i], base);
		i++;
	}
	return (nb * signe);
}
/*
int main (int argc, char **argv)
{
	argc = 1;
	printf("%d", ft_atoi_base(argv[1],argv[2]));
}
*/
