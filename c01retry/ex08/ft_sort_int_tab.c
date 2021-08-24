void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
	return ;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	run;
	int	i;

	i = 1;
	run = 1;
	while (run)
	{
		run = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap((tab + i), (tab + i + 1));
				run = 1;
			}
			i++;
		}
	}
}
