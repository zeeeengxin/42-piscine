/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 17:37:01 by xzeng             #+#    #+#             */
/*   Updated: 2017/08/12 17:37:04 by xzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	if (index < 0)
	{
		return (-1);
	}
	if (index >= 47)
	{
		return (0);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
