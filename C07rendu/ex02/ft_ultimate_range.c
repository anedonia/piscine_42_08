/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:50:24 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/18 12:50:52 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size_n;

	i = 0;
	size_n = max - min;
	if (min >= max)
		return (0);
	*range = malloc(sizeof(**range) * size_n);
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <libc.h>
int main (int argc, char *argv[])
{
	argc = 1;
	int min = atoi(argv[1]);
	int max = atoi(argv[2]);
	int *range;

	printf("%d\n", ft_ultimate_range(&range, min, max));
	for (int i = 0; i < (max-min); i++)
	{
		printf("%d ", range[i]);
	}
}
*/
