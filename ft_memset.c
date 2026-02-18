/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 20:29:10 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/13 20:30:04 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *arr, int n, size_t i)
{
	size_t			x;
	unsigned char	*p;

	x = 0;
	p = (unsigned char *) arr;
	while (x < i)
	{
		p[x] = (unsigned char) n;
		x++;
	}
	return (arr);
}

/*int	main(void)
{
	size_t i = 0;
	int arr [20] = {1, 3, 3, 2, 4, 4};

	ft_memset(arr, 49, 47);
	while (i < 20)
		{
			printf("%c\n", arr[i]);
			i++;
		}
	printf("%zu\n", i);
	return (0);
}*/
