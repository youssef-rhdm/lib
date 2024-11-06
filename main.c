/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:18:33 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/06 11:53:07 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

int main()
{
	printf("\033[0;31m");
	printf("%s", ft_strnstr("Hello burrito i would like a chiken and fish sticks",NULL,30));
	return 0;
}
