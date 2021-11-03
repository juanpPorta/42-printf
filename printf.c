/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:14:07 by jporta            #+#    #+#             */
/*   Updated: 2021/11/03 20:51:34 by jporta           ###   ########.fr       */
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

/* int	main(void)
{
	char	*hola;
	int		x = 0;
	int		a = 0;

	hola = malloc(sizeof(char *) * 2);
	x =	ft_printf (" %p %p ", LONG_MIN, LONG_MAX);
	a = printf (" %p %p ", LONG_MIN, LONG_MAX);
	printf("primero %d\nsegundo %d\n", x, a);
	return (0);
} */
