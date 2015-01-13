/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_convert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 02:05:53 by spochez           #+#    #+#             */
/*   Updated: 2015/01/13 06:29:06 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	ft_hexa_nb(int n)
{
	if (n == 10)
		return ('A');
	else if (n == 11)
		return ('B');
	else if (n == 12)
		return ('C');
	else if (n == 13)
		return ('D');
	else if (n == 14)
		return ('E');
	else
		return ('F');
	return (n + '0');
}

char	*ft_conv_dec_hexa(int dec)
{
	char	*tp;
	char	*hex;
	int		i;
	int		len;
	int		nb;

	i = 0;
	tp = ft_itoa(dec);
	len = ft_strlen(tp);
	hex = (char *)malloc(sizeof(char) * len + 1);
	while (dec > 0)
	{
		nb = (dec % 16);
		if (nb >= 10)
			hex[i] = ft_hexa_nb(nb);
		else
			hex[i] = nb + '0';
		dec /= 16;
		i++;
	}
	hex[i] = 0;
	hex = ft_strrev(hex);
	return (hex);
}
