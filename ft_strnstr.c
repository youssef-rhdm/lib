/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:41:54 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/08 16:59:37 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)(&haystack[i]));
	while (i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			k = i;
			while (needle[j] && k < len)
			{
				if (haystack[k] == needle[j])
				{
					k++;
					j++;
				}
				if (needle[j] == '\0')
					return ((char *)(&haystack[i]));
			}
		}
		i++;
	}
	return (NULL);
}
