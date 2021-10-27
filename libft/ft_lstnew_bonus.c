/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:07:42 by marvin            #+#    #+#             */
/*   Updated: 2021/09/22 20:13:15 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*listnew;

	listnew = malloc(sizeof(t_list));
	if (!listnew)
		return (0);
	listnew->content = content;
	listnew->next = NULL;
	return (listnew);
}
