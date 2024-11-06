/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:41:54 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/06 11:51:50 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle == (void *)0)
		return (char *)&haystack[i];
	i = 0;
	size_t needle_length = ft_strlen(needle);
	while (i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (j < needle_length)
			{
				if (haystack[i + j] == needle[j])
				{
					j++;
					if (j == needle_length)
						return ((char *)(&haystack[i]));
				}
				else
					break;
			}
		}
		i++;
	}
	return (NULL);
}
