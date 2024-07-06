/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 01:12:35 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:07:00 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p)
		ft_memset(p, 0, count * size);
	return (p);
}

/*
int main(void)
{
    int *arr = (int *)ft_calloc(5, sizeof(int));
    printf("First element: %d\n", arr[0]);
    free(arr);

    return 0;
}
*/
