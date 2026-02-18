/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 20:29:36 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/13 20:29:39 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	del(void *a)
// {
// 	free(a);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*a = malloc(sizeof(t_list));
// 	t_list	*b = malloc(sizeof(t_list));
// 	t_list	*c = malloc(sizeof(t_list));
// 	t_list	*new;
// 	a->content = ft_strdup("hello");
// 	a->next = b;
// 	b->content = ft_strdup("world");
// 	b->next = c;
// 	c->content = ft_strdup("yall");
// 	c->next = NULL;
// 	a->next = c;
// 	ft_lstdelone(b, del);
// 	new = a;
// 	while(new)
// 	{
// 		printf("%s\n", (char *)new->content);
// 		new = new->next;
// 	}
// }