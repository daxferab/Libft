/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 00:28:55 by daxferna          #+#    #+#             */
/*   Updated: 2025/01/13 22:23:28 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;

	i = n;
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	while (i-- > 0 && (dst != 0 || src != 0))
		((char *)dst)[i] = ((char *)src)[i];
	return (dst);
}
