/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:28:55 by daxferna          #+#    #+#             */
/*   Updated: 2025/01/13 22:23:28 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	ft_charinset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		j;
	int		s1len;

	s1len = ft_strlen(s1);
	i = 0;
	j = s1len - 1;
	while (i < s1len && ft_charinset(s1[i], set))
		i++;
	while (j >= 0 && ft_charinset(s1[j], set))
		j--;
	if (j < i)
	{
		p = ft_calloc(1, sizeof(char));
		if (!p)
			return (NULL);
		return (p);
	}
	p = malloc(j - i + 2);
	if (!p)
		return (0);
	ft_strlcpy(p, s1 + i, j - i + 2);
	return (p);
}
