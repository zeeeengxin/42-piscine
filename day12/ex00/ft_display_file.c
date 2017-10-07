/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 16:36:43 by xzeng             #+#    #+#             */
/*   Updated: 2017/08/24 16:36:45 by xzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUF_SIZE 4096

void	ft_display_file(char *name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(name, O_RDONLY);
	if (fd != -1)
	{
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
	}
	close(fd);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_err("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_err("Too many arguments.\n");
		return (0);
	}
	ft_display_file(argv[1]);
	return (0);
}
