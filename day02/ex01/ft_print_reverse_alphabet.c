/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:53:44 by xzeng             #+#    #+#             */
/*   Updated: 2017/08/10 22:41:16 by xzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int alpha;
	
	alpha = 'z';
	while (alpha >= 'a')
	{
		ft_putchar(alpha);
		alpha = alpha - 1;
	}
}
