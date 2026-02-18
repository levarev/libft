/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:11:55 by larevsha          #+#    #+#             */
/*   Updated: 2026/02/14 18:12:02 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(const char *s, char c)
{
	size_t	cw;

	cw = 0;
	while (*s)
	{
		if (*s != c)
		{
			cw++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (cw);
}

static void	split_free(char **s)
{
	size_t	i;

	if (!s || !*s)
		return ;
	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static char	**init(size_t *i, char const *s, char c)
{
	if (!s)
		return (NULL);
	*i = 0;
	return (malloc((count_word(s, c) + 1) * sizeof(char *)));
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	size_t	i;
	size_t	len;

	a = init(&i, s, c);
	if (!a)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			a[i] = ft_substr(s - len, 0, len);
			if (!a[i])
				return (split_free(a), NULL);
			i++;
		}
		else
			s++;
	}
	a[i] = NULL;
	return (a);
}

//int	main(int argc, char **argv)
//{
//	int	i = 0;

//	char	**a = ft_split(argv[1], *(argv[2]));
//	while (a[i])
//	{
//		printf("%s\n", a[i]);
//		i++;
//	}
//	return (0);
//}