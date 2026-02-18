/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:39:09 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/13 20:27:31 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	if (num > 4294967295 / size)
		return (NULL);
	a = (unsigned char *)malloc(num * size);
	if (a == 0)
		return (NULL);
	while (i < num * size)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
