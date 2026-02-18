/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:30:01 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/11 17:55:44 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*a;

	a = malloc(sizeof(t_list));
	if (!a)
		return (NULL);
	(*a).content = content;
	(*a).next = NULL;
	return (a);
}

// int	main(void)
// {
// 	t_list	*a = ft_lstnew((char *)"eve");
// 	printf("%s\n", (char *)a->content);
// }