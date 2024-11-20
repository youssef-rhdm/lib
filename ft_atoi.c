/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:33:26 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/20 16:09:24 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	sign_check(const char *str, int *sign)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	temp;
	unsigned long	result;

	sign = 1;
	i = 0;
	result = 0;
	temp = 9223372036854775807;
	i = sign_check(str, &sign);
	while (ft_isdigit(str[i]))
	{
		temp = result;
		result = result * 10 + (str[i] - '0');
		if (result > temp + (str[i] - '0') / 10)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		i++;
	}
	return ((int)(result * sign));
}
#include <libc.h>
int main()
{
	char s[] = "-9223372036854775807";
	printf("%d\n\n", ft_atoi(s));
	printf("%d\n", atoi(s));
}
