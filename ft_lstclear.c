/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 20:29:29 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/13 20:29:32 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static void	del(void *a)
//{
//	free(a);
//}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;

	if (!*lst || !lst)
		return ;
	a = *lst;
	while (*lst)
	{
		a = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = a;
	}
}

// int	main()
// {
// 	t_list	*a = malloc(sizeof(t_list));
// 	t_list	*b = malloc(sizeof(t_list));
// 	a->content = ft_strdup("hello");
// 	a->next = b;
// 	b->content = ft_strdup("world");
// 	b->next = NULL;
// 	ft_lstclear(&a, del);
// 	if (!a)
// 		printf("ok\n");
// 	else
// 		printf("chok\n");
// }