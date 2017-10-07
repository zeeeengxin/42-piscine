/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 16:55:04 by xzeng             #+#    #+#             */
/*   Updated: 2017/08/24 16:55:05 by xzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define BUF_SIZE 4096

int		ft_display_file(int fd)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (fd == -1)
		return (-1);
	while ((ret = read(fd, buf, BUF_SIZE)) != 0 && ret != -1)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (ret == -1)
		return (1);
	if (fd != 0)
		close(fd);
	return (0);
}

void	ft_display_err(char *name)
{
	ft_err("cat: ");
	ft_err(name);
	if (errno == EACCES)
		ft_err(": Permission denied\n");
	else if (errno == ENOENT)
		ft_err(": No such file or directory\n");
	else if (errno == EISDIR)
		ft_err(": Is a directory\n");
	else if (errno == EBADF)
		ft_err(": Bad file number\n");
	else if (errno == EAGAIN)
		ft_err(": Resource temporarily unavailable\n");
	else if (errno == EINTR)
		ft_err(": Interrupted function call\n");
	else if (errno == EIO)
		ft_err(": Input/output error\n");
	else if (errno == EINVAL)
		ft_err(": Invalid argument\n");
	else
		ft_err(": Unknown error\n");
}

int		main(int argc, char **argv)
{
	int		i;
	int		fd;

	if (argc == 1)
	{
		fd = 0;
		ft_display_file(fd);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (ft_display_file(fd) != 0)
			ft_display_err(argv[i]);
		i++;
	}
	return (0);
}
