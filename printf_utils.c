/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:07:44 by jporta            #+#    #+#             */
/*   Updated: 2021/11/03 18:15:13 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	vprint(const char s, va_list ag)
{
	int		res;

	res = 0;
	if (s == '%')
		res += write(1, "%%", 1);
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
	if (s == 'd')
		res += ft_putnbr_base(va_arg(ag, unsigned long long), "0123456789");
	return (res);
}
