/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:30:40 by ldevy             #+#    #+#             */
/*   Updated: 2021/08/11 13:56:06 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_b(char *str, unsigned int size)
{
	int	i;

	i = 0;
	while (i < 16 && size - i > 0)
	{
		if (str[i] < 32 || str[i] >= 127)
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	show_hex_char(char *str, unsigned int size)
{
	int		i;
	char	*tab_char;

	i = 0;
	tab_char = "0123456789abcdef";
	while (i < 16 && size-- > 0)
	{
		write(1, &tab_char[((unsigned char)str[i] / 16)], 1);
		write(1, &tab_char[((unsigned char)str[i] % 16)], 1);
		if ((i + 1) % 2 == 0)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if ((i + 1) % 2 == 0)
			write(1, " ", 1);
		i++;
	}
}

void	show_hex_addr(long unsigned int addr)
{
	char	*tab_char;
	int		string[16];
	int		i;

	i = -1;
	tab_char = "0123456789abcdef";
	while (++i < 16)
	{
		string[i] = addr % 16;
		addr /= 16;
	}
	while (--i >= 0)
	{
		write(1, &tab_char[string[i]], 1);
	}
	write(1, ": ", 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	void	*temp;

	temp = addr;
	i = (size / 16) + 1;
	while (i-- > 0)
	{
		show_hex_addr((long unsigned int) addr);
		show_hex_char(addr, size);
		ft_putstr_b(addr, size);
		addr += 16;
		size -= 16;
	}
	return (temp);
}
/*
#include <libc.h>

int main ()
{
	char b[] = "abcdefijklmnopqrstuvwxyz";
	char c[] = "abcdefijklmnopqrstuvwxyz1234567890 \n \t \034 \045 \032";
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("%p\n", a);
	ft_print_memory(c, 100);
	printf("\n");
	ft_print_memory(a, 26);
	printf("\n");
	ft_print_memory(a, 20);
}
*/
