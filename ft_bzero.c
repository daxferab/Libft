/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:23:47 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:06:47 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	return (ft_memset(b, 0, len));
}

/*
int main(void)
{
    char test[10];

    printf("Before bzero: \"%s\"\n", test);
    ft_bzero(test, sizeof(test));
    printf("After ft_bzero: \"%s\"\n", test);
    return 0;
}
*/
