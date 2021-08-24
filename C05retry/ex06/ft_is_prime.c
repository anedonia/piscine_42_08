/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:50:09 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/17 10:43:58 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;
	int	temp;

	temp = 0;
	index = 0;
	if (nb >= 2147395600)
		return (46340);
	if (nb <= 0)
		return (0);
	while (temp < nb)
	{
		temp = index;
		temp *= temp;
		if (temp >= nb)
			return (index);
		index++;
	}
	return (index);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	r;

	i = 2;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb == 1 || nb == 0 || nb < 0)
		return (0);
	i += 1;
	r = ft_sqrt(nb);
	while (i <= r)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}
/*
#include <unistd.h>
#include <libc.h>
int main ()
{
	printf("0  ->  0 :  %d\n",ft_is_prime(0));
	printf("1  ->  0 :  %d\n",ft_is_prime(1));
	printf("2  ->  1 :  %d\n",ft_is_prime(2));
	printf("3  ->  1 :  %d\n",ft_is_prime(3));
	printf("5  ->  1 :  %d\n",ft_is_prime(5));
	printf("9  ->  0 :  %d\n",ft_is_prime(9));
	printf("16 ->  0 :  %d\n",ft_is_prime(16));
	printf("25 ->  0 :  %d\n",ft_is_prime(25));
	printf("36 ->  0 :  %d\n",ft_is_prime(36));
	printf("-2903 -> 1 :  %d\n",ft_is_prime(-2903));
	printf("1,000,000,007 -> : 1  %d\n",ft_is_prime(1000000007));
	printf("-2147483647    -> : 1  %d\n",ft_is_prime(-2147483647));
}
*/
