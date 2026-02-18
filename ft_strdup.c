/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:39:26 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/06 17:04:54 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	size_t	i;
	char	*a;

	i = 0;
	while (s[i] != '\0')
		i++;
	a = malloc(i + 1);
	i = 0;
	if (a == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		a[i] = s[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

// int	main(void)
// {
// 	char	*a = "geeksforgeeks";
// 	char	*b = ft_strdup(a);
// 	printf("%s\n", a);
// 	return (0);
// }
