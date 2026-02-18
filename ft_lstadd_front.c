/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:54:49 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/11 19:33:12 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int	main()
// {
// 	t_list	*a = malloc(sizeof(t_list));
// 	t_list	*b = malloc(sizeof(t_list));
// 	t_list	*new = malloc(sizeof(t_list));
// 	t_list	*t;

// 	a->content = "hello";
// 	b->content = "world";
// 	b->next = NULL;
// 	a->next = b;
// 	new->content = "yall";
// 	ft_lstadd_front(&a, new);
// 	t = a;
// 	while(t)
// 	{
// 		printf("%s\n", (char *)t->content);
// 		t = t->next;
// 	}
// }