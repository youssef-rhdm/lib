/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:06:25 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/17 14:55:07 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// todo check allocation  size
#include <stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t length;

	length = ft_strlen(s);
	if (length <= start)
		len = 0;
	else if (len > length - start)
		len = length - start;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}
// int main(int argc, char const *argv[])
// {
// 	printf("str: %s\n", ft_substr("",1,1));
// 	return 0;
// }

