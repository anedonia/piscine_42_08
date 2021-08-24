/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:30:35 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/17 10:20:25 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		nb *= temp;
		power--;
	}
	return (nb);
}
/*
#include <libc.h>
int main ()
{
	printf("-5,-2 : %d", ft_iterative_power(-5,-2));
	printf("\n");
	printf("2345,0 : %d", ft_iterative_power(45678,0));
	printf("\n");
	printf("0,0  : %d", ft_iterative_power(0,0));
	printf("\n");
	printf("1,10  : %d", ft_iterative_power(1,10));
	printf("\n");
	printf("2,4  : %d", ft_iterative_power(2,4));
	printf("\n");
	printf("5,3  : %d", ft_iterative_power(5,3));
	printf("\n");
	printf("9,3  : %d", ft_iterative_power(9,3));
	printf("\n");
}
*/
