/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:58:32 by marvin            #+#    #+#             */
/*   Updated: 2021/09/17 15:58:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int resto;

	if (n < 0)
	{
		ft_putchar('-', fd);
		resto = (unsigned int)(n * -1);
	}
	else
		resto = (unsigned int)n;
	if (resto >= 10)
		ft_putnbr_fd(resto / 10, fd);
	ft_putchar_fd((char)(resto % 10 + 48), fd);
}
