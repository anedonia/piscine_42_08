/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:16:55 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/24 16:27:37 by ldevy            ###   ########.fr       */
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

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*new;

	if (!*src)
		return (0);
	new = malloc(sizeof(*new) * (ft_strlen(src) + 1));
	ft_strcpy(new, src);
	return (new);
}
/*
#include <libc.h>
int main ()
{
	char str[] = "yo les salopes";

	printf("%s", ft_strdup(str));
}
*/
