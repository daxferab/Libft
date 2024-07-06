/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:01:28 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:07:05 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		++i;
	while (n && ++i)
		n /= 10;
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*p;
	const char	*d = "0123456789";

	i = ft_numlen(n);
	p = malloc(sizeof(char) * (i + 1));
	if (!p)
		return (0);
	p[i] = 0;
	if (n == 0)
		p[0] = '0';
	if (n < 0)
		p[0] = '-';
	while (n)
	{
		if (n > 0)
			p[--i] = d[n % 10];
		else
			p[--i] = d[n % 10 * -1];
		n /= 10;
	}
	return (p);
}

/*
int main(void)
{
    int num1 = 123;
    int num2 = -456;

    printf("Testing ft_itoa:\n");

    char *result1 = ft_itoa(num1);
    printf("Input: %d, Result: %s\n", num1, result1);
    free(result1);

    char *result2 = ft_itoa(num2);
    printf("Input: %d, Result: %s\n", num2, result2);
    free(result2);

    return 0;
}
*/
