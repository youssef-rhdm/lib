/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:07:03 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/07 11:26:24 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	len;

	len = ft_strlen(s1);
	x = 0;
	while (ft_strchr(set,s1[x]))
		x++;
	while (ft_strchr(set, s1[len-1]))
		len--;
	return ft_substr(s1, x, len - x);
}
