/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:58:24 by xzeng             #+#    #+#             */
/*   Updated: 2017/08/10 15:58:31 by xzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	output(int x, int y)
{
	ft_putchar(x / 10 + 48);
	ft_putchar(x % 10 + 48);
	ft_putchar(' ');
	ft_putchar(y / 10 + 48);
	ft_putchar(y % 10 + 48);
}

void	ft_print_comb2(void)
{
	int first;
	int second;
	
	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			output(first, second);
			if (first != 98 || second != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second = second + 1;
		}
		first = first + 1;
	}
}
