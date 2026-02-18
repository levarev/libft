/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:23:48 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/11 19:36:13 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*a;

	i = 0;
	a = lst;
	while (a)
	{
		i++;
		a = (*a).next;
	}
	return (i);
}

//int	main()
//{
//	t_list	*a = malloc(sizeof(t_list));
// 	t_list	*b = malloc(sizeof(t_list));
//	t_list	*y;

// 	a->content = "hello";
// 	b->content = "world";
// 	b->next = NULL;
// 	a->next = b;
//	y=a;
//	printf ("%d\n", ft_lstsize(y));
//}