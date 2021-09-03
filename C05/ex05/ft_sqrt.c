/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:32:02 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/16 16:32:08 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;
	int	temp;

	temp = 0;
	index = 0;
	if (nb < 0 || nb > 2147395600)
		return (0);
	while (temp < nb)
	{
		temp = index;
		temp *= temp;
		if (temp == nb)
			return (index);
		index++;
	}
	return (0);
}
/*
#include <libc.h>
#include <unistd.h>

int main ()
{
	printf("1  ->  1 :  %d\n",ft_sqrt(1));
	printf("0  ->  0 :  %d\n",ft_sqrt(0));
	printf("4  ->  2 :  %d\n",ft_sqrt(4));
	printf("9  ->  3 :  %d\n",ft_sqrt(9));
	printf("16 ->  4 :  %d\n",ft_sqrt(16));
	printf("25 ->  5 :  %d\n",ft_sqrt(25));
	printf("36 ->  6 :  %d\n",ft_sqrt(36));
	printf("49 ->  7 :  %d\n",ft_sqrt(49));
	printf("1999878400 -> : 44720  %d\n",ft_sqrt(1999878400));
	printf("1999878401 -> : 0  %d\n",ft_sqrt(1999878401));
	printf("2147483647 -> : 0  %d\n",ft_sqrt(2147483647));
}
*/
