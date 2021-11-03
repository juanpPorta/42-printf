/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:07:44 by jporta            #+#    #+#             */
/*   Updated: 2021/11/03 19:28:10 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	vprint(const char s, va_list ag)
{
	int		res;

	res = 0;
	if (s == 'c')
		res += ft_putchar(va_arg(ag, int));
	if (s == 's')
		res += ft_putstr(va_arg(ag, char *));
	if (s == 'p')
	{
		res += write(1, "0x", 2);
		res += ft_putnbr_base(va_arg(ag, unsigned long long),
				"0123456789abcdef");
	}
	if (s == 'd' || s == 'i' )
		res += ft_putnbr_base(va_arg(ag, int), "0123456789");
	if (s == 'u')
		res += ft_putnbr_base(va_arg(ag, unsigned int), "0123456789");
	if (s == 'x')
		res += ft_putnbr_base(va_arg(ag, unsigned long long),
				"0123456789abcdef");
	if (s == 'X')
		res += ft_putnbr_base(va_arg(ag, unsigned long long),
				"0123456789ABCDEF");
	return (res);
}
