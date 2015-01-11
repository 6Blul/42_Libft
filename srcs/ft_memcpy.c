/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 12:07:10 by spochez           #+#    #+#             */
/*   Updated: 2015/01/10 04:39:08 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tpst;
	char	*tprc;
	size_t	i;

	tpst = (char *)dst;
	tprc = (char *)src;
	i = 0;
	if (src)
	{
		while (i < n)
		{
			tpst[i] = tprc[i];
			i++;
		}
	}
	return (dst);
}
