/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:27:55 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/11 21:10:14 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char a, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (a == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	x;
	size_t	n;
	char	*a;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	n = 0;
	x = ft_strlen(s1);
	while (check(s1[i], set) && s1[i] != '\0')
		i++;
	while (x > 0 && i < x && check(s1[x - 1], set))
		x--;
	a = malloc(x - i + 1);
	if (!a)
		return (NULL);
	while (i < x)
	{
		a[n] = s1[i];
		i++;
		n++;
	}
	a[n] = '\0';
	return (a);
}

/*int	main()
{
	char	*a = "-x!";
	char	*b = "-!";
	char	*c = ft_strtrim(a, b);
	printf("%s\n", c);
}*/