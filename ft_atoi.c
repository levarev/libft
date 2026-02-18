/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:40:30 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/13 20:27:24 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *a)
{
	int	i;
	int	n;
	int	d;

	n = 0;
	i = 0;
	d = 1;
	while ((a[i] >= 9 && a[i] <= 13) || a[i] == 32)
		i++;
	if (a[i] == '-' || a[i] == '+')
	{
		if (a[i] == '-')
			d = d * -1;
		i++;
	}
	while (a[i] >= 48 && a[i] <= 57)
	{
		n = 10 * n + a[i] - 48;
		i++;
	}
	return (n * d);
}

// int	main(void)
// {
// 	char *a = ("+1");
// 	int	x = ft_atoi(a);
// 	printf("%d\n", x);
// 	return (40);
// }
