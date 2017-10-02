/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 17:01:55 by xzeng             #+#    #+#             */
/*   Updated: 2017/08/12 17:01:59 by xzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	if (power < 0)
	{
		return (0);
	}
	if (power >= 1)
	{
		n = nb * ft_recursive_power(nb, power - 1);
		return (n);
	}
	return (1);
}
