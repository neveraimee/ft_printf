/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:28:01 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/25 17:33:15 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	find_datatype(char specifier, va_list *ap)
{
	if (specifier == 'c')
		return (ft_printf_c(va_arg(*ap, int)));
	else if (specifier == 's')
		return (ft_printf_str(va_arg(*ap, char *)));
	else if (specifier == 'p')
		return (ft_printf_ptr(va_arg(*ap, void *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_printf_dec_int(va_arg(*ap, int)));
	else if (specifier == 'u')
		return (ft_printf_u(va_arg(*ap, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_printf_hex(va_arg(*ap, unsigned int), specifier));
	else if (specifier == '%')
		return (ft_printf_c('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	va_start(ap, format);
	count = 0;
	i = 0;
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
			count += find_datatype(format[++i], &ap);
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		if (format[i])
			i++;
	}
	va_end(ap);
	return (count);
}
