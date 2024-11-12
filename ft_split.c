/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:49:47 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/12 15:58:19 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	word_counter(char const *str, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			counter++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		x;
	int		y;
	char	**str;

	str = (char **)malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	x = 0;
	y = i;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			str[x] = ft_substr(s, y, i - y);
			y = i + 1;
			x++;
		}
		i++;
	}
	return (str);
}
	// while (s[i] == c)
	// 	i++;
		// if (s[i] == '\0')
		// 	str[x] = ft_substr(s, y, i - y);

int main(int argc, char const *argv[])
{
	char *str = "breath_of_fresh_air";
	int word_count= 4;
	int i = 0;
 	while (i < word_count)
	{
		printf("Word %d :%s\n", i,ft_split(str, '_')[i]);
		i++;
	}
	return 0;
}
