/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:04:07 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/05 11:06:39 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*srce;

	dest = (unsigned char *)dst;
	srce = (const unsigned char *)src;
	if (len == 0)
		return (dst);
	if (dest > srce)
	{
		i = len;
		while (i--)
			dest[i] = srce[i];
	}
	else if (dest < srce)
	{
		i = 0;
		while (i < len)
		{
			dest[i] = srce[i];
			i++;
		}
	}
	return (dst);
}
