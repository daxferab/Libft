/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:01:46 by daxferna          #+#    #+#             */
/*   Updated: 2025/01/13 22:23:28 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;

	p = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!p)
		return (0);
	i = 0;
	while (s[i] != 0)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = 0;
	return (p);
}
