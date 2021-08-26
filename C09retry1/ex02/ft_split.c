/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 11:31:11 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/23 19:47:04 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	nb_words(char *str, char *charset)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	while (str[i])
	{	
		if (!is_sep(str[i], charset))
		{
			word++;
			while (!is_sep(str[i], charset) && str[i])
				i++;
		}
		if (str[i])
			i++;
	}
	return (word);
}

void	make_word(int j, char *str, char **tab, int *word)
{
	int	i;

	i = 0;
	tab[*word] = malloc((j + 1) * sizeof(**tab));
	while (i < j)
	{
		tab[*word][i] = str[i];
		i++;
	}
	tab[*word][i] = '\0';
	*word += 1;
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		word;

	tab = malloc((nb_words(str, charset) + 1) * sizeof(*tab));
	i = 0;
	word = 0;
	while (str[i])
	{	
		j = 0;
		if (!is_sep(str[i], charset))
		{
			while (!is_sep(str[i + j], charset) && str[i + j])
				j++;
			make_word(j, &str[i], tab, &word);
			i = i + j;
		}
		if (str[i])
			i++;
	}
	tab[word] = NULL;
	return (tab);
}
