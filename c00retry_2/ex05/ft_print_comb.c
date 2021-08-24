#include <unistd.h>

void	ft_show_nbr(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
		write(1, ", ", 2);
	return ;
}

void	init_char(char *a, char *b, char *c)
{
	*a = 0;
	*b = 1;
	*c = 2;
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	init_char(&a, &b, &c);
	while (a < 8)
	{
		while (a < b)
		{
			while (c > b && c <= 9)
			{
				ft_show_nbr(a + 48, b + 48, c + 48);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
	return ;
}
