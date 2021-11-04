/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:07:44 by jporta            #+#    #+#             */
/*   Updated: 2021/11/04 15:50:13 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexade(unsigned long long n, char *hexa)
{
	int		x;

	x = 0;
	if (n >= 16)
		x += ft_hexade(n / 16, hexa);
	if (n || (n == 0 && x == 0))
		x++;
	ft_putchar(hexa[n % 16]);
	return (x);
}

int	ft_dec(long n)
{
	int	x;

	x = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		x++;
	}
	if (n > 9)
	{
		x += ft_dec(n / 10);
	}
	if (n || (n == 0 && x == 0))
		x++;
	ft_putchar((n % 10) + 48);
	return (x);
}

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
		res += ft_hexade(va_arg(ag, unsigned long long), "0123456789abcdef");
	}
	if (s == 'd' || s == 'i' )
		res += ft_dec(va_arg(ag, int));
	if (s == 'u')
		res += ft_dec(va_arg(ag, unsigned int));
	if (s == 'x')
		res += ft_hexade((unsigned int)va_arg(ag, int), "0123456789abcdef");
	if (s == 'X')
		res += ft_hexade((unsigned int)va_arg(ag, int), "0123456789ABCDEF");
	return (res);
}
