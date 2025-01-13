/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:01:41 by daxferna          #+#    #+#             */
/*   Updated: 2025/01/13 22:23:28 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	ft_countwords(const char *s, char c)
{
	int	i;
	int	words;
	int	slen;

	i = 0;
	words = 0;
	slen = ft_strlen(s);
	if (slen == 0)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
		{
			words++;
			while (s[i + 1] && s[i + 1] == c)
				i++;
		}
		i++;
	}
	if (s[0] == c && s[slen - 1] == c)
		words--;
	if (s[0] != c && s[slen - 1] != c)
		words++;
	return (words);
}

static int	ft_wordsize(const char *s, char c)
{
	int	size;

	size = 0;
	while (*s == c)
		s++;
	while (*s != c && *s != 0)
	{
		size++;
		s++;
	}
	return (size);
}

static char	**ft_free(char **p, int i)
{
	if (!p[i])
	{
		while (i >= 0)
			free(p[i--]);
		free(p);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		words;
	int		wsize;

	words = ft_countwords(s, c);
	i = 0;
	p = (char **)ft_calloc(words + 1, sizeof(char *));
	if (!p)
		return (0);
	while (i < words)
	{
		while (*s == c)
			s++;
		wsize = ft_wordsize(s, c) + 1;
		p[i] = (char *)ft_calloc(wsize, sizeof(char));
		if (!p[i])
			return (ft_free(p, i));
		ft_strlcpy(p[i], s, wsize);
		s += wsize;
		i++;
	}
	return (p);
}
