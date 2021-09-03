/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:36:16 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/15 19:39:40 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <libc.h>
#include <unistd.h>

int main ()
{
	printf("-4 -> -1 :  %d\n",ft_fibonacci(-4));
	printf("0  ->  0 :  %d\n",ft_fibonacci(0));
	printf("1  ->  1 :  %d\n",ft_fibonacci(1));
	printf("2  ->  1 :  %d\n",ft_fibonacci(2));
	printf("3  ->  2 :  %d\n",ft_fibonacci(3));
	printf("4  ->  3 :  %d\n",ft_fibonacci(4));
	printf("5  ->  5 :  %d\n",ft_fibonacci(5));
	printf("9  ->  34:  %d\n",ft_fibonacci(9));
	printf("16 -> 987:  %d\n",ft_fibonacci(16));
}
*/
