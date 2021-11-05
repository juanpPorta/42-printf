/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:14:28 by jporta            #+#    #+#             */
/*   Updated: 2021/11/05 16:48:24 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int		vprint(const char s, va_list ag);
int		ft_hexade(unsigned long long n, char *hexa);
int		ft_printf(const char *str, ...);
int		ft_dec(long n);
#endif