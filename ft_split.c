/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:49:47 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/12 10:28:32 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	word_counter(char const *str, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c || str[i + 1] == '\0')
			counter++;
		i++;
	}
	return (counter);
}
	// printf("%d\n",counter);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		x;
	int		y;
	char	**str;
	int		word_count;

	word_count = word_counter(s, c);
	str = (char **)malloc(sizeof(char *) * word_count);
	if (!str)
		return (NULL);
	i = 0;
	x = 0;
	y = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			str[x] = ft_substr(s, y, i - y);
			y = i + 1;
			x++;
		}
		i++;
		if (s[i] == '\0')
			str[x] = ft_substr(s, y, i - y);
	}
	return (str);
}

int main(int argc, char const *argv[])
{
	char *str = "breath_of_air_";
	int word_count = 3;
	for (size_t i = 0; i < word_count; i++)
	{
		printf("Word %zu :%s\n", i,ft_split(str, '_')[i]);
	}

	return 0;
}
