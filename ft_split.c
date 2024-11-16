/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:49:47 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/14 14:12:16 by yrhandou         ###   ########.fr       */
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
	s = ft_strtrim(s,&c);
	while (s[i]!= '\0')
	{
		while (s[i] !=c)
		{
			
			i++;
		}

		i++;
	}

	return (str);
}

int main(int argc, char const *argv[])
{
	char *str = "___black_hole___";
	int word_count= 4;
	int i = 0;
	char **newarray = ft_split(str, '_');
	while (i < word_count)
	{
		printf("Word %d :%s\n", i+1,newarray[i]);
		i++;
	}
	return 0;
}
