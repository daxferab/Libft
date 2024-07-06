/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:34:46 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:09:54 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
    char test_string[] = "Hello, World!";
    int search_char1 = 'o';
    int search_char2 = 'x';

    char *result1 = ft_memchr(test_string, search_char1, ft_strlen(test_string));
    if (result1)
        printf("Search for '%c': Found\n", search_char1);
    else
        printf("Search for '%c': Not found\n", search_char1);

    char *result2 = ft_memchr(test_string, search_char2, ft_strlen(test_string));
    if (result2)
        printf("Search for '%c': Found\n", search_char2);
    else
        printf("Search for '%c': Not found\n", search_char2);
    return 0;
}
*/
