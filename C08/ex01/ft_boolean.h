/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:17:44 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/25 16:06:11 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#	ifndef FT_BOOLEAN_H
# define	FT_BOOLEAN_H
# include <unistd.h>
typedef int	t_bool;
# define FALSE 0
# define SUCCESS 0
# define TRUE 1
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(x) (x % 2) == 0

#endif
