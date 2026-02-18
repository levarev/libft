/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:40:51 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/12 17:13:42 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*a;

	if (!lst)
		return (NULL);
	a = lst;
	while (a->next)
		a = a->next;
	return (a);
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
//	y=ft_lstlast(a);
//	printf("%s\n", (char *)y->content);
//}