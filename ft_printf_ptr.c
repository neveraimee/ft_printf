/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:27:35 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/25 17:35:06 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *ptr)
{
	int				count;
	unsigned long	p;

	if (!ptr)
		return (ft_printf_str("(nil)"));
	write(1, "0x", 2);
	p = (unsigned long)ptr;
	count = ft_printf_hex((unsigned long) p, 'x');
	return (count + 2);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int		x;
// 	void	*ptr;

// 	ptr = &x;
// 	int	ft = ft_printf("char: %p\n", ptr);
// 	int	og = printf("char: %p\n", ptr);

// 	printf("ft: %d | og: %d\n", ft, og);
// 	ft = ft_printf("%p\n", NULL);
// 	og = printf("%p\n", NULL);
// 	ft_printf(" %p %p ", (void *) 0, (void *) 0);
// 	printf(" %p %p ", (void *) 0, (void *) 0);
// }
// #include <stdio.h>
// int main()
// {
// 	ft_printf("%p %p", 0, 0);
// 	char *str = "hi";
// 	printf(" %p %p", 0, 0);
// }
