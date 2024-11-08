/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:18:33 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/08 16:58:42 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char *str1 = "aslkmask";
	char  tt[] = "9223372036854775809";
		printf("\e[0;31m");
		printf("Red : %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
		printf("\e[0;32m");
		printf("Green :%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));

		return 0;
}
