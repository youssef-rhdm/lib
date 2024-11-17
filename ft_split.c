/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:49:47 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/17 15:29:49 by yrhandou         ###   ########.fr       */
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

int count_sub(char const *str, char c)
{
	int	i;

	i=0;
	while (str[i] != c && str[i])
		i++;
	return i;
}

char **free_arr(char **str)
{
	int i;

	i=-1;
	while (str[++i])
		free(str[i]);
	free(str);
	return (NULL);
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
	x = -1;
	y = i;
	//s = ft_strtrim(s,&c);
	while (s[i]!= '\0')
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			str[++x] = ft_substr(s,i,count_sub(&s[i],c));
			if (!str[x])
				return (free_arr(str));
		while (s[i] != c && s[i])
			i++;
	}
	str[++x] = NULL;
	return (str);
}

// int main(int argc, char const *argv[])
// {
// 	char *str = "llll";
// 	int word_count= 4;
// 	int i = 0;
// 	char **newarray = ft_split(str, '_');
// 	while (newarray[i])
// 	{
// 		printf("Word %d :%s\n", i+1,newarray[i]);
// 		i++;
// 	}
// 	return 0;
// }
