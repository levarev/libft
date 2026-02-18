/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 20:31:51 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/13 20:31:54 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	p = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (p < s)
	{
		while (i < n)
		{
			p[i] = s[i];
			i++;
		}
	}
	if (p > s)
	{
		while (i < n)
		{
			p [n - 1] = s [n - 1];
			n--;
		}
	}
	return (dest);
}
