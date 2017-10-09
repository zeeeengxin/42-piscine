#include <stdio.h>
#include <stdlib.h>

int islast(int n, int nb[])
{
	if (nb[n - 1] != 9)
		return 0;
	for (int j = 0; j < n - 1; j++)
	{
		if (nb[j] != nb[j + 1] - 1)
			return 0;
	}
	return 1; // test if it is the last combination
}

void ft_comb(int n, int nb[], int index)
{
	int count;

	count = 0;
	if (index == n)
	{
		for (int i = 0; i < n; i++)
			printf("%d", nb[i]);
		if (!islast(n, nb))
			printf(", ");
		return;
	}
	while (count < 10)
	{
		if (index > 0 && nb[index - 1] >= count)
		{
			count++;
			continue;
		}
		else
		{
			nb[index] = count;
			ft_comb(n, nb, index + 1);
		}
		count++;
	}
}

void ft_print_combn(int n)
{
	int nb[10];
	int index = 0;
	for (int i = 0; i < 10; i++)
	{
		nb[i] = 0;
	}
	ft_comb(n, nb, index); 
}

/* int main(int argc, char **argv)
{
	int a = 0;
	if (argc == 2)
		a = atoi(argv[1]);
	ft_print_combn(a);
	return 0;
}

for testing */