/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_dec_bin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 04:17:14 by spochez           #+#    #+#             */
/*   Updated: 2015/01/14 01:17:44 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_conv_dec_base(int dec, int base)
{
	char		*bin;
	intmax_t	tp;

	while (dec > 0)
	{
		tp = (dec % base) + '0';
		dec /= base;
		if (dec > 0)
			tp *= 10;
	}
	bin = ft_itoa(tp);
	return (bin);
}
