/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:14:07 by jporta            #+#    #+#             */
/*   Updated: 2021/11/04 15:57:11 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "limits.h"

int	ft_printf(const char *str, ...)
{
	va_list	ag;
	int		cont;
	int		res;

	cont = 0;
	res = 0;
	va_start(ag, str);
	while (str[cont])
	{
		if (str[cont] == '%')
		{
			if (str[cont + 1] == '%')
				res += write(1, "%%", 1);
			else
				res += vprint(str[cont + 1], ag);
			cont++;
		}
		else
		{
			res += write(1, &str[cont], 1);
		}
		cont++;
	}
	va_end(ag);
	return (res);
}
