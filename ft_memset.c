/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:54:38 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/17 17:37:42 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
int main(int argc, char const *argv[])
{
	int i = 0;
	ft_memset(&i,0,4);
	ft_memset(&i,0x0, 4);
	ft_memset(&i, 0x5, 2);
	ft_memset(&i, 0x39, 1);
	printf("%d",i);
	return 0;
}

