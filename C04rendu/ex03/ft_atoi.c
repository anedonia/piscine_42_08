/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 14:57:11 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/14 14:59:09 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	nb;

	nb = 0;
	signe = 1;
	i = 0;
	while (is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (is_num(str[i]))
	{
		nb = (nb * 10) + str[i] - 48;
		i++;
	}
	return (nb * signe);
}
/*
#include <libc.h>
#include <unistd.h>

int main ()
{
	printf("%d : %d\n",atoi("1"),ft_atoi("1"));
	printf("%d : %d\n",atoi("-1w323"),ft_atoi("-1w3423"));
	printf("%d : %d\n",atoi("-"),ft_atoi("-"));
	printf("%d : %d\n",atoi("   --  34789"),ft_atoi("   ---+-+45a678"));
	printf("%d : %d\n",atoi("-4789"),ft_atoi("  -4789"));
}
*/
