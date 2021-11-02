/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:07:44 by jporta            #+#    #+#             */
/*   Updated: 2021/11/02 18:21:18 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	vprint(const char s, va_list ag)
{
	char	c;

	if (s == '%')
		write(1, "%%", 1);
	if (s == 'c')
	{
		c = va_arg(ag, int);
		ft_putchar(c);
	}
	if (s == 's')
		ft_putstr(va_arg(ag, char *));
}
