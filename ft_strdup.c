/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:46:35 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/02 16:05:37 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	size_t i;
	size_t len;
	unsigned char *str;

	len = 0;
	while (s1[len] != '\0')
		len++;
	str = (unsigned char *) malloc(sizeof(char) *i);
	i = 0;
	while(i < len )
	{
		str[i] = s1[i];
		i++;
	}
	return (char *)str;
}
