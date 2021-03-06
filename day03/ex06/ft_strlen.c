/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 22:28:12 by xzeng             #+#    #+#             */
/*   Updated: 2017/08/11 22:28:15 by xzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while ((*str) != '\0')
	{
		count = count + 1;
		str = str + 1;
	}
	return (count);
}
