/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:24:14 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/09 22:47:04 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n != -2147483648 && n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 0 && n <= 9)
	{
		a = n + 48;
		write(fd, &a, 1);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		a = (n % 10) + 48;
		write(fd, &a, 1);
	}
}

// int	main(void)
// {
// 	ft_putnbr_fd(-42, 1);
// 	return (0);
// }