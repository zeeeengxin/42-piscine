/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 22:27:38 by xzeng             #+#    #+#             */
/*   Updated: 2017/08/12 22:27:41 by xzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	factor;

	factor = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (factor < 46340 && factor * factor <= nb)
	{
		if (nb % factor == 0)
		{
			return (0);
		}
		factor++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
