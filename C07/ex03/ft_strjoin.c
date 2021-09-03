/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:53:55 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/24 16:23:38 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_mem_size(int	size, char *strs[], char *sep)
{
	int	total;
	int	i;

	i = 0;
	total = 0;
	if (size == 0)
		return (0);
	total += (ft_strlen(sep) * (size - 1));
	while (i < size)
	{
		total += ft_strlen(strs[i]) * sizeof(**strs);
		i++;
	}
	return (total);
}

void	ft_strcat_final(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		mem_size;
	char	*str_final;
	int		i;

	i = 0;
	mem_size = ft_mem_size(size, strs, sep);
	str_final = malloc(sizeof(*str_final) * mem_size);
	*str_final = 0;
	while (i < size)
	{
		ft_strcat_final(str_final, strs[i]);
		if (!(size - 1 == i))
			ft_strcat_final(str_final, sep);
		i++;
	}
	return (str_final);
}
/*
#include <libc.h>
int main (int argc, char *argv[])
{
	printf("%s\n", ft_strjoin(argc - 1, &argv[1],"fag"));
//	printf("%d\n", ft_mem_size(argc - 1, &argv[1], "o"));
	return (0);
}
*/
