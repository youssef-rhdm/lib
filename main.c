/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:18:33 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/17 19:53:29 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
	char *str = "llll";
	int word_count = 4;
	int i = 0;
	char **newarray = ft_split("ggggggggggg", 'g');
	while (newarray[i])
	{
		printf("Word %d :%s\n", i + 1, newarray[i]);
		i++;
	}
	return 0;
}
