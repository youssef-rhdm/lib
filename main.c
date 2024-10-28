/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:18:33 by yrhandou          #+#    #+#             */
/*   Updated: 2024/10/28 20:35:15 by yrhandou         ###   ########.fr       */
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
#include "./ft_strlcpy.c"
#include "./ft_strlcat.c"

int main()
{
	char src[4] = "Ome";
	char dst1[50] = "Amine twil is a donkey";
	char dst2[50] = "Amine twil is a donkey";
	int dstsize = 26;
	printf("Original Output : %lu, result =  %s, \n", strlcat(dst1, src, dstsize), dst1);
	printf("mMy Output : %lu, Result =  %s, \n", ft_strlcat(dst2, src, dstsize), dst2);
	return 0;
}
