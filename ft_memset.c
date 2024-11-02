/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:54:38 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/02 10:04:34 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *str;
	unsigned char chr;

	str = (unsigned char *)b;
	chr = (unsigned char) c;
	i = 0;
	while (i < len)
	{
		str[i] = chr;
		i++;
	}
	return (b);
}
