/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:23:09 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/09 17:25:24 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha_num(char c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_alpha_num(str[i]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			while (is_alpha_num(str[++i]))
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
			}
		}
		if (str[i] != '\0')
			i++;
	}
	return (str);
}
