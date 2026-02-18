/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:41:08 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/17 16:29:09 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*u;
	unsigned char	d;

	u = (unsigned char *)s;
	d = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (u[i] == d)
			return ((void *)&u[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	int	b = 306;
// 	char	*n = ft_memchr(s, 0, 0);
// 	printf("%s\n", n);
// 	return (0);
// }
