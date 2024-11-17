/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:07:03 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/17 19:46:16 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Todo handle null
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	len;

	len = ft_strlen(s1);
	x = 0;
	while (s1[x] && ft_strchr(set, s1[x]))
		x++;
	while (x < len && ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, x, len - x));
}
