/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:52:11 by spochez           #+#    #+#             */
/*   Updated: 2015/01/11 03:40:35 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	res = malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	if (s && (*f))
	{
		while (s[i])
		{
			res[i] = (*f)(i, s[i]);
			i++;
		}
		res[i] = 0;
	}
	return (res);
}
