/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 09:52:12 by spochez           #+#    #+#             */
/*   Updated: 2015/01/12 06:44:06 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	ch;
	unsigned char	*str;

	ch = 0;
	str = (unsigned char *)b;
	if (len == 0)
		return (b);
	while (ch < len)
	{
		str[ch] = (unsigned char)c;
		ch++;
	}
	return (b);
}
