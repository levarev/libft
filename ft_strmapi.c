/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:20:07 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/09 22:40:39 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	func(unsigned int i, char c)
// {
// 	return (c);
// }

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*a;
	int		i;

	i = 0;
	a = malloc(ft_strlen(s) + 1);
	if (!a)
		return (NULL);
	while (s[i])
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}

// int	main(void)
// {
// 	char	*a = ft_strmapi("barev", func);
// 	printf("%s\n", a);
// 	return (0);
// }