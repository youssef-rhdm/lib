/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:18:33 by yrhandou          #+#    #+#             */
/*   Updated: 2024/10/31 13:07:53 by yrhandou         ###   ########.fr       */
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
#include "./ft_memcmp.c"
#include "./ft_memchr.c"
#include "./ft_memmove.c"
#include "./ft_bzero.c"

int main()
{
	char dst = "1337leaders";
	char src[] = "1337x.to";
	size_t size = 11;
	printf("%p\n",&dst);
	printf("%p",&src);
	// printf("%s\n", memmove(dst, dst+2, size));
	// printf("%s\n", memmove(dst, dst+2, size));

	return 0;
}
