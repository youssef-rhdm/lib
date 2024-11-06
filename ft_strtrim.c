/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:07:03 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/06 16:05:13 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*str;
	size_t	str_size;

	str_size = ft_strlen(s1);
	str = (char *)malloc(str_size * sizeof(char));
	if (str == NULL)
		return NULL;
	i = 0;
	while (str[i] !='\0')
	{
		if (ft_stnstr())
		{
			/* code */
		}

	}
	return (str);
}
