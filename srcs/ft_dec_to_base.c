/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binary_convert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 02:37:38 by spochez           #+#    #+#             */
/*   Updated: 2015/02/03 06:48:10 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_complete(char *bin)
{
	int		len;
	char	*tp;
	char 	*ret;

	len = ft_strlen(bin) + 1;
	ret = (char *)malloc(sizeof(char) * len + 1);
	tp = ret;
	while (*bin)
	{
		*tp = *bin;
		tp++;
		bin++;
	}
	*tp = '0';
	tp += 1;
	*tp = 0;
	return (ret);
}

char	*ft_conv_dec_base(int dec, int base);	
{
	char		*bin;
	uintmax_t	tp;
	int			nb;
	int			add;

	add = 0;
	tp = 0;
	while (arg > 0)
	{
		tp += (arg % base);
		arg /= base;
		if (arg > 0)
			tp *= 10;
		if (arg % base == 0)
			add = 1;
	}
	bin = ft_uinmaxtoa(tp);
	bin = ft_strrev(bin);
	if (add == 1)
		bin = ft_complete(bin);
	return (bin);
}
