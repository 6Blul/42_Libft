/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 04:48:18 by spochez           #+#    #+#             */
/*   Updated: 2015/01/11 04:56:49 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*res;

	if (lst)
	{
		new = (*f)(lst);
		res = new;
		while (lst->next != NULL)
		{
			new->next = (*f)(lst->next);
			lst = lst->next;
			new = new->next;
		}
		return (res);
	}
	return (NULL);
}
