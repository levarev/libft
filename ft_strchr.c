/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:42:20 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/09 16:36:35 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	int	i;

	i = 0;
	while (src[i] != (unsigned char)c && src[i] != '\0')
		i++;
	if (src[i] == (unsigned char)c)
	{
		return ((char *)&src[i]);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *a = "dmcvoHmma";
// 	char	b = 'H';
// 	char *n = ft_strchr(a, 'm');
// 	printf("%s\n", n);
// }
