/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 22:48:20 by xzeng             #+#    #+#             */
/*   Updated: 2017/08/12 11:34:38 by xzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		count;
	int		i;
	char	c;

	count = 0;
	i = 0;
	while (str[count] != '\0')
	{
		count = count + 1;
	} 
	// after the above code, str[count] == '\0'
	// that's why it's wrong
	while (count > i)
	{
		c = str[i];
		str[i] = str[count];
		str[count] = c;
		count = count - 1;
		i = i + 1;
	}
	return (str);
}
