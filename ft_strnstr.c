/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:23:04 by daxferna          #+#    #+#             */
/*   Updated: 2024/01/28 15:23:04 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (*nee == 0)
		return ((char *)hay);
	while (hay[i] != '\0' && i < len)
	{
		j = i;
		k = 0;
		while (hay[j] == nee[k] && j < len)
		{
			j++;
			k++;
			if (nee[k] == 0)
				return ((char *)&hay[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int main()
{
    const char *haystack = "Hello, world! Hello";
    const char *needle = "world";
    size_t len = 20;

    char *resultado = ft_strnstr(haystack, needle, len);

    if (resultado != 0)
        printf("Found in position %ld.\n", resultado - haystack);

    return 0;
}
*/