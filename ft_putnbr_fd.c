/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:47:58 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/09 11:40:50 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// TODO wHY IS THIs false

void	ft_putnbr_fd(int n, int fd)
{
	int	x;
	int	y;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		x = n / 10;
		y = n % 10;
		ft_putnbr_fd(x, fd);
		ft_putnbr_fd(y, fd);
	}
	else
	{
		ft_putchar_fd(n + 48, fd);
	}
}
