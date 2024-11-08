/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:41:54 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/08 12:24:37 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return (char *)&haystack[i];
	while (i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (j < len)
			{
				if (haystack[i + j] == needle[j])
				{
					if (j == len)
						return ((char *)(&haystack[i]));
					j++;
				}
				else
					break;
			}
		}
		i++;
	}
	return (NULL);
}
