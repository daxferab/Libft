/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:40:15 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:53:29 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*p;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	p = malloc(s1len + s2len + 1);
	if (!p)
		return (0);
	ft_strlcpy(p, s1, s1len + 1);
	ft_strlcat(p, s2, s1len + s2len + 1);
	return (p);
}

/*
int main(void)
{

    char *s1 = "Hello, ";
    char *s2 = "World!";
    char *result1 = ft_strjoin(s1, s2);
    printf("String 1: \"%s\"\nString 2: \"%s\"\n\
	Result: \"%s\"\n\n", s1, s2, result1);

    free(result1);

    return 0;
}
*/
