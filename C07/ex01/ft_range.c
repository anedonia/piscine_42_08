/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:09:16 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/18 13:01:51 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	range;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	tab = malloc(sizeof(*tab) * range);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
#include <libc.h>
int main (int argc, char *argv[])
{
	argc = 1;
	int min = atoi(argv[1]);
	int max = atoi(argv[2]);
	int *tab;

	tab = ft_range(min, max);
	for (int i = 0; i < (max-min); i++)
	{
		printf("%d ", tab[i]);
	}
}
*/
