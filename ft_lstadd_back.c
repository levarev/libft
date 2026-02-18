/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 20:29:17 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/13 20:29:21 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	if (!lst && !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	a = *lst;
	while (a->next)
		a = a->next;
	a->next = new;
}

// int	main(void)
// {
// 	t_list	*a = malloc(sizeof(t_list));
// 	t_list	*b = malloc(sizeof(t_list));
// 	t_list	*new = malloc(sizeof(t_list));
// 	t_list	*c;
// 	a->content = "helo";
// 	a->next = b;
// 	b->content = "world";
// 	b->next = NULL;
// 	new->content = "yall";
// 	ft_lstadd_back(&a, new);
// 	c = a;
// 	while (c)
// 	{
// 		printf("%s\n", (char *)c->content);
// 		c = (*c).next;
// 	}
// }