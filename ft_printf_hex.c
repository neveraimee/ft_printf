/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:27:20 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/25 17:27:24 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned long nbr, char format)
{
	char	*base;
	char	digit;
	int		count;

	base = "0123456789abcdef";
	if (format == 'X')
		base = "0123456789ABCDEF";
	count = 0;
	if (nbr >= 16)
		count += ft_printf_hex(nbr / 16, format);
	digit = base[nbr % 16];
	write(1, &digit, 1);
	count++;
	return (count);
}
// #include <stdio.h>
// int main (void)
// {
// 	int ft;
// 	int og;

// 	ft = ft_printf("str: %X\n", 255);
//     og = printf("str: %X\n", 255);
//     printf("ft: %d | og: %d\n", ft, og);
// }
// #include <stdio.h>
// #include <limits.h>

// int main(void)
// {
//     printf("24: %x\n", LONG_MAX);
//     printf("25: %x\n", LONG_MIN);
//     printf("27: %x\n", ULONG_MAX);
//     printf("28: %x\n", 9223372036854775807LL);
// }
