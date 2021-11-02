/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:14:07 by jporta            #+#    #+#             */
/*   Updated: 2021/11/02 18:36:52 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ag;
	int		cont;

	cont = 0;
	va_start(ag, str);
	while (str[cont])
	{
		if (str[cont] == '%')
		{
			vprint(str[cont + 1], ag);
			cont++;
		}
		else
		{
			ft_putchar(str[cont]);
			cont++;
		}
	}
	va_end(ag);
	return (0);
}

int	main(void)
{
	ft_printf("%c%% string %s", 'a', "hola");
	return (0);
}
