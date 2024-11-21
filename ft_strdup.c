/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:46:35 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/21 20:58:14 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t			i;
	size_t			len;
	char			*str;

	len = ft_strlen(s1);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
#include <libc.h>
int main(int argc, char const *argv[])
{
	char *src = strdup("I DONT KNOW WHAT TO DO");
	char dest[100] = "mamamia kono";
	int len = 3;
	printf("%s\n\n", src);
	// printf("%c\n\n", dest[8]);
	return 0;
}
