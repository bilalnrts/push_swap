/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binurtas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:14:59 by binurtas          #+#    #+#             */
/*   Updated: 2022/12/17 12:40:10 by binurtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	ft_strchr(char *str, char c)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !str)
		return (0);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	free(s1);
	return (str);
}

char	*get_line(char *str)
{
	int		i;
	char	*s1;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	s1 = malloc(i + 2);
	if (!s1)
		return (0);
	i = 0;
	while (str[i] != '\n' && str[i])
	{
		s1[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		s1[i++] = '\n';
	s1[i] = '\0';
	return (s1);
}

char	*next_str(char *str)
{
	int		i;
	int		j;
	char	*s1;

	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (0);
	}
	s1 = malloc(ft_strlen(str) - i + 1);
	if (!s1)
		return (0);
	while (str[++i])
		s1[j++] = str[i];
	s1[j] = '\0';
	free(str);
	return (s1);
}
