/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:18:33 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/11 18:16:39 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <limits.h>

int main()
{
	int i = 0, j, x = 0, y = 0;
	char *src = "EU_LA_UK";

	char str[10][10];
	char c = '_';
	while (src[i] != '\0')
	{
		if (src[i] == c)
		{
			j = 0;
			while (y < i)
			{
				str[x][j] = src[y];
				y++;
				j++;
			}
			// str[x][j] = '\0';
			x++;
			y++;
		}
		i++;
		if (src[i] == '\0')
		{
			j = 0;
			while (y < i)
			{
				str[x][j] = src[y];
				y++;
				j++;
			}
			// str[x][j] = '\0';
		}

	}
	i = 0;
		printf("%s\n%s\n%s\n", str[0], str[1], str[2]);

}
