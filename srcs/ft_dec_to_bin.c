/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_dec_bin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 04:17:14 by spochez           #+#    #+#             */
/*   Updated: 2015/01/13 06:12:34 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_conv_dec_bin(int dec)
{
	char	*tp;
	char	*bin;
	int		i;
	int		len;

	i = 0;
	tp = ft_itoa(dec);
	len = ft_strlen(tp);
	bin = (char *)malloc(sizeof(char) * len + 1);
	while (dec > 0)
	{
		bin[i] = (dec % 2) + '0';
		dec /= 2;
		i++;
	}
	bin[i] = 0;
	bin = ft_strrev(bin);
	return (bin);
}
