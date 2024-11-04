/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:49:47 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/03 12:09:32 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_delimiter(const char *str, char c)
{
	size_t	i;
	size_t	count;
	i = 0;

	while (str[i] != '\0')
	{
		if(str[i] == c)
			count++;
		i++;
	}
	return count;
}

char **ft_split(char const *s, char c)
{
	// happy birthday
	size_t i;
	char *str;
	int delimter_count;

	delimter_count = count_delimiter(s,c);
	str = (char *)malloc(sizeof(s));

	i = 0;
	while (s[i] != c)
	{

		i++;
	}
}
