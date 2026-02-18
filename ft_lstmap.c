/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:48:04 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/12 17:14:02 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void	del(void *a)
//{
//	free(a);
//}
//void	*f(void *a)
//{
//	char	*tnew = ft_strdup("barevdzez");
//	return tnew;
//}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*add;
	char	*text;

	if (!f || !lst || !del)
		return (NULL);
	a = NULL;
	while (lst)
	{
		text = f(lst->content);
		add = ft_lstnew(text);
		if (!add)
		{
			del(text);
			ft_lstclear(&a, del);
			return (NULL);
		}
		ft_lstadd_back(&a, add);
		lst = lst->next;
	}
	return (a);
}

//int	main(void)
//{
//	t_list	*a = malloc(sizeof(t_list));
//	t_list	*b = malloc(sizeof(t_list));
//	t_list	*new = malloc(sizeof(t_list));
//	a->content = ft_strdup("hello");
//	a->next = b;
//	b->content = ft_strdup("world");
//	b->next = NULL;
//	new = ft_lstmap(a, f, del);
//	while (new)
//	{
//		printf("%s\n", (char *)new->content);
//		new = new->next;
//	}
//}