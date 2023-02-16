/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binurtas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:29:18 by binurtas          #+#    #+#             */
/*   Updated: 2022/10/07 13:29:20 by binurtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*f;

	f = malloc(sizeof(t_list));
	if (!f)
		return (0);
	f->content = content;
	f->next = 0;
	return (f);
}
