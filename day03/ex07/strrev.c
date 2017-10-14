/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zengxin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 11:10:08 by zengxin           #+#    #+#             */
/*   Updated: 2017/10/14 11:10:21 by zengxin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// for testing #include <stdio.h>
#include <stdlib.h>

char	*strrev(char *str)
{
	int		count;
	int		i;
	char	c;

	if (str == NULL || *str == 0)
		return (str);
	count = 0;
	i = 0;
	while (str[count] != '\0')
		count = count + 1;
	count = count - 1;
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

/* int main()
{
	char *a;
	char b[10] = "";
	a = (char *)malloc(20);
	a = strrev(b);
	printf("%s\n", a);
	return 0;
}
