/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dec_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:27:12 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/25 17:34:12 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_dec_int(int n)
{
	int		count;
	int		digit;
	long	nbr;

	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		count++;
	}
	if (nbr >= 10)
		count += ft_printf_dec_int(nbr / 10);
	digit = (nbr % 10) + '0';
	write(1, &digit, 1);
	count++;
	return (count);
}
// #include <stdio.h>
// int main (void)
// {
// 	int ft;
// 	int og;

// 	ft = ft_printf("str: %d\n", -2147483647);
//     og = printf("str: %d\n", -2147483647);
//     printf("ft: %d | og: %d\n", ft, og);
// } 