/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:50:11 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/17 18:52:03 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		write(1, str + i, 1);
		i++;
	}
}

void	ft_sort_argv(char **tab, int size)
{
	int		run;
	int		i;
	char	*temp;

	i = 0;
	run = 1;
	while (run)
	{
		run = 0;
		i = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				run = 1;
			}
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_sort_argv(&argv[1], argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
