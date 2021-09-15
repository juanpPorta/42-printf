/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:49:54 by marvin            #+#    #+#             */
/*   Updated: 2021/09/15 12:49:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst , const char *src , size_t size)
{
	unsigned int i;
	unsigned int indx;

	i = 0;
	indx = 0;
	if (!dst || !src)
		return (0);
	while (src[i] != '\0')
		i++;
	if (size != 0)
	{
		while (src[indx] != '\0' && indx <= size)
		{
			dst[indx] = src[indx];
			indx++;
		}
		dst[indx] = '\0';
	}
	return (i);
}
