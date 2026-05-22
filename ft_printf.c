/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/22 15:20:15 by username         #+#    #+#              */
/*   Updated: 2026/05/22 17:54:02 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	find_datatype(char specifier, va_list * ap)
{
	if (specifier == 'c')
		return (ft_printf_c(va_arg(*ap, int)));
	else if (specifier == 's')
		return (ft_printf_str(va_arg(*ap, char *)));
	else if (specifier == 'p')
		return (ft_printf_ptr((void *) va_arg(*ap, unsigned long)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_printf_dec_int(va_arg(*ap, int)));
	else if (specifier == 'u')
		return (ft_printf_u(va_arg(*ap, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_printf_hex((unsigned long) va_arg(*ap, unsigned int), specifier));
	else if (specifier == '%')
		return (ft_printf_c('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int	count;
	int	i;

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
// #include <stdio.h>

//  int main()
//  {
// 	ft_printf("%");
// 	printf("%");
// 	char *str = "this project failed";
// 	return 0;
//  }
