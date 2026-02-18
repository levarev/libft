/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 20:32:06 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/17 21:24:33 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				a;
	unsigned char		*p;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	p = (unsigned char *)dest;
	s = (const unsigned char *)src;
	a = 0;
	while (a < n)
	{
		p[a] = s[a];
		a++;
	}
	return (dest);
}

/*int	main(void)
{
	char x[10] = "barev";
	ft_memcpy(x + 5, "dzez", 12);
	printf("%s\n", x);
	return (0);
}*/
