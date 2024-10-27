/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:41:54 by yrhandou          #+#    #+#             */
/*   Updated: 2024/10/27 15:53:17 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while (i >= 0 && len > 0)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (j != 0)
			{
				if (haystack[i + j] == needle[j])
				{
					len--;
					if (len == 0)
						return ((char *)(&haystack[i]));
				}
				j++;
			}
		}
		len--;
		i++;
	}
	return (NULL);
}
