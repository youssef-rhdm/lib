/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:05:10 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/02 14:55:55 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	unsigned char *ptr;
	size_t i;

	i=0;

	ptr = (unsigned char *)malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	while (i < count *size)
	{
		ptr[i]= 0;
		i++;
	}
	return (void *)ptr;
}
