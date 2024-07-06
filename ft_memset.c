/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:00:14 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:09:41 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*start;

	start = b;
	while (len-- > 0)
		*(char *)b++ = c;
	return (start);
}

/*
int main(void)
{
    char buffer[20];

    ft_memset(buffer, 'A', sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';
    printf("Filled: %s\n", buffer);

    return 0;
}
*/
