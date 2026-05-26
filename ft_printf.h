/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:28:15 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/05/25 17:33:41 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_printf_c(char c);
int	ft_printf_str(char *str);
int	ft_printf_ptr(void *ptr);
int	ft_printf_dec_int(int n);
int	ft_printf_u(unsigned int n);
int	ft_printf_hex(unsigned long nbr, char format);

#endif