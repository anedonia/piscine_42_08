/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:12:52 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/15 15:16:29 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	temp;

	temp = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 2 || nb == 1)
		return (nb);
	else
	{
		while (--temp > 1)
		{
			nb *= temp;
		}
		return (nb);
	}
}
