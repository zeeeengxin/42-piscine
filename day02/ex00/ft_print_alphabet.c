/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:53:44 by xzeng             #+#    #+#             */
/*   Updated: 2017/08/10 13:53:51 by xzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	alpha;
	
	alpha = 'a';
	while (alpha <= 'z')
	{
		ft_putchar(alpha);
		alpha = alpha + 1;
	}
}
