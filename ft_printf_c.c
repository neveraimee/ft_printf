/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:27:02 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/25 17:33:57 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_c(char c)
{
	write(1, &c, 1);
	return (1);
}
// #include <stdio.h>
// int main (void)
// {
// 	int ft;
// 	int og;

// 	ft = ft_printf("char: %c\n", 'a');
//  	og = printf("char: %c\n", 'a');
// 	ft = ft_printf("%c\n", '%');
//  	printf("ft: %d | og: %d\n", ft, og);
// }