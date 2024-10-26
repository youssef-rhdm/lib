/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:18:33 by yrhandou          #+#    #+#             */
/*   Updated: 2024/10/25 10:51:40 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
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

int main()
{
	char test = ' ';
	printf("result : %s\n", strrchr("lorem  ipsum '; fasum",test));
	printf("result : %s\n", ft_strrchr("lorem  ipsum '; fasum",test));
	return 0;
}
