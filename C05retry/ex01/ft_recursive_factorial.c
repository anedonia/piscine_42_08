/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:12:03 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/15 17:13:51 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 2)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 2 || nb == 1)
		return (nb);
	return (nb);
}
