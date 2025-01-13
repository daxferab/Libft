/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:01:28 by daxferna          #+#    #+#             */
/*   Updated: 2025/01/13 22:23:28 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_numlen(int n)
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
