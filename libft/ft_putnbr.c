/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:00:37 by jporta            #+#    #+#             */
/*   Updated: 2021/11/02 15:03:13 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	resto;

	if (n < 0)
	{
		ft_putchar('-');
		resto = (unsigned int)(n * -1);
	}
	else
		resto = (unsigned int)n;
	if (resto >= 10)
		ft_putnbr(resto / 10);
	ft_putchar((char)(resto % 10 + 48));
}
