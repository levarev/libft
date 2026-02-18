/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 19:33:21 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/09 16:57:49 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t s)
{
	size_t	i;
	size_t	n;

	n = 0;
	i = 0;
	while (src[n] != '\0')
		n++;
	if (s == 0)
		return (n);
	while (i + 1 < s && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (n);
}

/*int	main(void)
{
	char	a[7];
	char	*b = "hello world";
	char	x[7];
	char	*y = "hello world";

	ft_strlcpy(a, b, 8);
	printf("%s\n", a);
	strncpy(x, y, sizeof(x));
	printf("%s\n", x);
	return(0);
}*/
