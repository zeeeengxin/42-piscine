/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:58:24 by xzeng             #+#    #+#             */
/*   Updated: 2017/08/10 15:58:31 by xzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	combi(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_print_comb(void)
{
	int first;
	int second;
	int third;
	
	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				combi(first, second, third);
				if (first != '7' || second != '8' || third != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				third = third + 1;
			}
			second = second + 1;
		}
		first = first + 1;
	}
}
