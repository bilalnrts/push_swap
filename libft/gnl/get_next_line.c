/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binurtas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:43:28 by binurtas          #+#    #+#             */
/*   Updated: 2022/12/17 11:43:51 by binurtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*read_the_line(char *str, int fd)
{
	int		buff;
	char	*s1;

	s1 = malloc(BUFFER_SIZE + 1);
	buff = 1;
	if (!s1)
		return (0);
	while (!ft_strchr(str, '\n') && buff)
	{
		buff = read(fd, s1, BUFFER_SIZE);
		if (buff == -1)
		{
			free(s1);
			return (0);
		}
		s1[buff] = '\0';
		str = ft_strjoin(str, s1);
	}
	free(s1);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str = read_the_line(str, fd);
	if (!str)
		return (0);
	line = get_line(str);
	str = next_str(str);
	return (line);
}
