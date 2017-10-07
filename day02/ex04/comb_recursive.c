#include <stdio.h>

/* rewrite with recursion */

void comb_recursive(int nb[], int index)
{
	int	n = 0;
	if (index == 3)
	{
		for (int i = 0; i < 3; i++)
			printf("%d", nb[i]);
		if (!(nb[0] == 7 && nb[1] == 8 && nb[2] == 9))
			printf(", ");
		return;
	}
	while (n <= 9)
	{
		if (index > 0 && nb[index - 1] >= n)
			{
				n++;
				continue;
			}
		else
		{
			nb[index] = n;
			comb_recursive(nb, index + 1);
		}
		n++;
	}
}

void ft_print_comb(void)
{
	int nb[3] = {0, 0, 0};
	int index = 0;
	comb_recursive(nb, index);
}

/* for testing

int main()
{
	ft_print_comb();
	return 0;
}
*/