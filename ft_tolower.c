/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 20:32:19 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/13 20:32:21 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*int	main()
{
	int i = 0;
	char a[] = "rygfi3bfFFh";
	while (a[i])
	{
		printf("%c\n", ft_tolower(a[i]));
		i++;
	}
}*/
