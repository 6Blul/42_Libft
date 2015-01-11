/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 03:28:18 by spochez           #+#    #+#             */
/*   Updated: 2015/01/11 03:53:30 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tp;

	if (alst)
	{
		while ((*alst) != NULL)
		{
			tp = (*alst)->next;
			(*del)((*alst)->content, (*alst)->content_size);
			ft_memdel((void **)alst);
			*alst = tp;
		}
	}
}
