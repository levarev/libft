/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:38:58 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/10 19:37:47 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char	*s2, size_t n)
{
	size_t			i;
	size_t			x;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)s1;
	s = (unsigned char *)s2;
	i = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)d);
	while (i < n && d[i] != '\0')
	{
		x = 0;
		if (d[i] == s[x])
		{
			while (d[i + x] == s[x] && (i + x) < n && s[x] != '\0')
			{
				x++;
			}
			if (x == ft_strlen(s2))
				return ((char *)&d[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main (void)
// {
// 	char	*a = "bedlfor bed";
// 	char	*b = "lfo";
// 	char	*p = ft_strnstr(a, b, 10);
// 	printf("%s\n", p);
// }
