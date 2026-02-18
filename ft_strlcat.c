/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 20:44:37 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/09 18:29:26 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = ft_strlen(dest);
	if (c >= n)
		return (ft_strlen(src) + n);
	while (src[i] && c + i + 1 < n)
	{
		dest[c + i] = src[i];
		i++;
	}
	dest[c + i] = '\0';
	return (c + ft_strlen(src));
}

// int	main(void)
// {
// 	char	a[7] = "barev";
// 	char	b[] = "dzez";

// 	ft_strlcat(a, b, 0);
// 	printf("%s\n", a);
// 	return (0);
// }
