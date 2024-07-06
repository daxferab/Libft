/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 01:12:40 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:09:25 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*p;

	len = ft_strlen(s1);
	p = (char *)malloc(len + 1);
	if (p != NULL)
		ft_strlcpy(p, (char *)s1, len + 1);
	return (p);
}

/*
int main(void)
{
    const char *str1 = "Hello, World!";
    char *result1 = ft_strdup(str1);
    printf("Original String: \"%s\"\nResult: \"%s\"\n\n", str1, result1);
    free(result1);

    return 0;
}
*/
