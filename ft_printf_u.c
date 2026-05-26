/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:27:53 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/25 17:29:19 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int n)
{
	int	count;
	int	digit;

	count = 0;
	if (n >= 10)
		count += ft_printf_u(n / 10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
	count++;
	return (count);
}
// #include <stdio.h>
// int main (void)
// {
// 	int ft;
// 	int og;

// 	ft = ft_printf("str: %u\n", 2147483647);
//     og = printf("str: %u\n", 2147483647);
//     printf("ft: %d | og: %d\n", ft, og);
// }