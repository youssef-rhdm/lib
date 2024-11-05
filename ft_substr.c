/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:06:25 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/05 10:50:03 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(s) * len +1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (i == start)
		{
			j = 0;
			while (j < len)
			{
				str[j] = s[i + j];
				j++;
			}
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
