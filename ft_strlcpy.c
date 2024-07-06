/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:53:08 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:54:16 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i + 1 < size && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}

/*
int main(void)
{
    char dest1[15];
    char *src1 = "Hello, World!";
    size_t result1 = ft_strlcpy(dest1, src1, sizeof(dest1));
    printf("Original Destination: \"%s\"\nSource: \"%s\"\n\
	Result: \"%s\"\nReturn Value: %zu\n\n", "", src1, dest1, result1);

    return 0;
}
*/
