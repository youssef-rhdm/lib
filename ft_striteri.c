/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:43:57 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/09 16:12:53 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void to_upperid(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c -= 32;
}

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
#include <stdio.h>
#include <limits.h>

int main()
{
	char pok[] = "pppppppp";
	ft_striteri(pok, to_upperid);
	printf("%s", pok);
	return 0;
}
