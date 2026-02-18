/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 15:42:35 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/13 20:28:06 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	minus(int *n, int *i)
{
	if (*n < 0)
	{
		*n = -*n;
		(*i)++;
	}
}

static int	num(int i, int c)
{
	if (c < 0)
		c = -c;
	while (c / 10)
	{
		i++;
		c /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		c;
	int		i;

	i = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	c = n;
	minus(&n, &i);
	i = num (i, c);
	a = malloc(i + 1);
	if (!a)
		return (NULL);
	a[i] = '\0';
	while (n / 10 && i != 0)
	{
		a[i-- - 1] = n % 10 + 48;
		n = n / 10;
	}
	a[i - 1] = n + 48;
	if (c < 0)
		a[i - 2] = '-';
	return (a);
}

// int	main(void)
// {
// 	char *b = ft_itoa(10);
// 	printf("%s\n", b);
// }