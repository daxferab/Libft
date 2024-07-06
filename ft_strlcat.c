/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:56:37 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:53:12 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	if (i < dstsize)
	{
		while (src[j] != '\0' && i + j < dstsize - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}

/*
int main(void)
{
    char dst1[15] = "Hello";
    char *src1 = " World!";
    size_t result1 = ft_strlcat(dst1, src1, sizeof(dst1));
    printf("Original Destination: \"%s\"\nSource: \"%s\"\n\
	Result: \"%s\"\nReturn Value: %zu\n\n", "Hello", src1, dst1, result1);

    return 0;
}
*/
