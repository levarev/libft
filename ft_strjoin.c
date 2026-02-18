/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:24:49 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/06 17:28:43 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	size_t	i;
	size_t	t;

	t = 0;
	i = 0;
	a = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!a)
		return (NULL);
	while (i < ft_strlen(s1) && s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}
	while (t < ft_strlen(s2) && s2[t] != '\0')
	{
		a[i] = s2[t];
		i++;
		t++;
	}
	a[i] = '\0';
	return (a);
}

/*int	main(void)
{
	char	*a = "";
	char	b[] = "vfv";
	char	*c = ft_strjoin(a, b);
	printf("%s\n", c);
	return (0);
}*/