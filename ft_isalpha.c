/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:19:12 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/15 10:37:54 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((unsigned char)c >= 65 && (unsigned char)c <= 90) || ((unsigned char)c >= 97 && (unsigned char)c <= 122))
		return (1);
	return (0);
}
