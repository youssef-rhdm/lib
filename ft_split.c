/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:49:47 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/11 13:35:24 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int delimiter_count(char *str,char c)
{
	int i;

	i =0;
	while (str[i] == c)
		i++;
	return (i);

}


char	**ft_split(char const *s, char c)
{
	int	i;
	int	x;
	int	y;
	char **str;
	
	str = (char **)malloc(sizeof(char) * ft_strlen(s)+1);
	if(!str)
		return (NULL);

	return (str);
}
