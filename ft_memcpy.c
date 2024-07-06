/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:32:33 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:09:48 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*start;

	start = dst;
	while (len-- > 0 && (dst != 0 || src != 0))
		ft_memset(dst++, *(const char *)src++, 1);
	return (start);
}

/*
int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];

    ft_memcpy(dest, src, ft_strlen(src) + 1);
    printf("Copied String: %s\n", dest);

    return 0;
}
*/