/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:18:33 by yrhandou          #+#    #+#             */
/*   Updated: 2024/10/29 14:21:12 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include "./ft_strlen.c"
#include "./ft_isdigit.c"
#include "./ft_isprint.c"
#include "./ft_isascii.c"
#include "./ft_isalpha.c"
#include "./ft_isalnum.c"
#include "./ft_toupper.c"
#include "./ft_tolower.c"
#include "./ft_strchr.c"
#include "./ft_strrchr.c"
#include "./ft_atoi.c"
#include "./ft_strnstr.c"
#include "./ft_strncmp.c"
#include "./ft_strlcat.c"
#include "./ft_strlcpy.c"
#include "./ft_memcpy.c"

int main()
{
	// char src[3] = "Cpp";
	// char dst[13] = "Nuts Channel";
	// int srcsize = 6;

	// printf("Original Output : %s / %lu \n", memcpy(dst, src, srcsize), ft_strlen(dst));
	printf("My Output : %s \n", 	ft_memcpy(NULL, NULL, 3));

	// printf("dst : %s\n", dst);

	// for (size_t i = 0; i < sizeof(dst); i++)
	// {
	// 	if (dst[i] == '\0')
	// 		printf("dst[%d] is null\n", i);
	// 	else
	// 	printf("dst : %c \n", dst[i]);
	// 	/* code */
	// }

	return 0;
}
