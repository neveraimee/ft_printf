/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:27:44 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/25 17:30:41 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *str)
{
	int	i;

	if (!str)
		return (ft_printf_str("(null)"));
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
// #include <stdio.h>
// int main (void)
// {
// 	int ft;
// 	int og;

// 	ft = ft_printf("str: %s\n", "string");
//     og = printf("str: %s\n", "string");
//     printf("ft: %d | og: %d\n", ft, og);

// 	ft_printf("%s\n", (char *)NULL);
// 	printf("%s", (char *)NULL);
// }
