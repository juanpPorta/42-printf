/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:00:37 by jporta            #+#    #+#             */
/*   Updated: 2021/11/03 18:31:15 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putcharfinal(int final, int nb, int divisor)
{
	int	mostrar;
	int	contador;

	mostrar = 0;
	contador = 0;
	while (divisor != 0)
	{
		mostrar = nb / divisor;
		mostrar = mostrar + final;
		contador += write(1, &mostrar, 1);
		nb = nb % divisor;
		divisor = divisor / 10;
	}
	return (contador);
}

int	ft_putnbr(long nb)
{
	int			temporal;
	int			divisor;
	int			final;
	static int	contador;

	divisor = 1;
	final = 48;
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	temporal = nb;
	while (temporal / 10 != 0)
	{
		temporal = temporal / 10;
		divisor = divisor * 10;
	}
	contador += ft_putcharfinal(final, nb, divisor);
	return (contador);
}
