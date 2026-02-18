/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:20:26 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/09 15:54:33 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	change(unsigned int i, char *c)
// {
// 	*c = *c - 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *a))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char	a[] = "hello";
// 	ft_striteri(a, change);
// 	printf("%s\n", a);
// 	return (0);
// }