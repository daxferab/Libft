/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:06:28 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:09:51 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Bye";
    char str3[] = "Hello";
    size_t n = 5;

    printf("Testing ft_memcmp:\n");

    int result1 = ft_memcmp(str1, str2, n);
    printf("Comparison 1: %d\n", result1);

    int result2 = ft_memcmp(str1, str3, n);
    printf("Comparison 2: %d\n", result2);

    return 0;
}
*/
