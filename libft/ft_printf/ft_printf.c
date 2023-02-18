/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binurtas <binurtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:55:00 by binurtas          #+#    #+#             */
/*   Updated: 2023/02/18 15:55:41 by binurtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_type(va_list ap, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (c == 'p')
		return (write(1, "0x", 2) + ft_putptr(va_arg(ap, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_putnbr(va_arg(ap, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(ap, unsigned int), c));
	else if (c == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(ap, str);
	while (str[i])
	{
		if ((str[i]) == '%')
			j += ft_type(ap, str[i++ + 1]);
		else
			j += write(1, &str[i], 1);
		i++;
	}
	va_end(ap);
	return (j);
}
