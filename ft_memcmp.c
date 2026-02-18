/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:39:17 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/11 21:06:59 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	unsigned char	*x;
	unsigned char	*y;
	size_t			i;

	i = 0;
	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	while (i < n)
	{
		if (x[i] != y[i])
			return (x[i] - y[i]);
		i++;
	}
	return (0);
}

//int	main(void)
//{
//	long long a[] = {1, 2, 6, 3};
//	long long b[] = {1, 2, 256, 3};
//	int i = ft_memcmp(a, b, 1000);
//	printf("%d\n", i);
//	return (0);
//}
