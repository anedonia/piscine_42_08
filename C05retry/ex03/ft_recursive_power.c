/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:54:12 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/17 10:29:22 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
/*
#include <libc.h>
#include <unistd.h>

int main ()
{
	printf("-5,0 : %d", ft_recursive_power(-5,0));
	printf("\n");
	printf("-1,4 : %d", ft_recursive_power(-1,4));
	printf("\n");
	printf("0,0  : %d", ft_recursive_power(0,0));
	printf("\n");
	printf("1,10  : %d", ft_recursive_power(1,10));
	printf("\n");
	printf("2,4  : %d", ft_recursive_power(2,4));
	printf("\n");
	printf("5,3  : %d", ft_recursive_power(5,3));
	printf("\n");
	printf("9,3  : %d", ft_recursive_power(9,3));
	printf("\n");
}
*/
