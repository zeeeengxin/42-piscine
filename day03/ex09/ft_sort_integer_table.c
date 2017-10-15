
void ft_sort_integer_table(int *tab, int size)
{
	int i;
	int flag;
	int tmp;

	flag = 1;
	while (flag == 1)
	{
		flag = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				flag = 1;
			}
		}
	}
}