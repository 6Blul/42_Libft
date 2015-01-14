/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_dec_bin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 04:17:14 by spochez           #+#    #+#             */
/*   Updated: 2015/01/14 00:59:32 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_conv_dec_bin(int dec, int base)
{
	char	*tp;
	char	*bin;
	int		i;
	int		len;

	i = 0;
	tp = ft_itoa(dec);
	len = ft_strlen(tp);
	bin = (char *)malloc(sizeof(char) * (len * 3) + 1);
	while (dec > 0)
	{
		bin[i] = (dec % base) + '0';
		dec /= base;
		i++;
	}
	bin[i] = 0;
	bin = ft_strrev(bin);
	return (bin);
}
