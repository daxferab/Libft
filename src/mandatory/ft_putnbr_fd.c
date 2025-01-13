/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:01:24 by daxferna          #+#    #+#             */
/*   Updated: 2025/01/13 22:23:28 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static void	ft_print(int num, int fd)
{
	int		i;
	char	p;
	char	n[10];

	i = 0;
	while (num > 0)
	{
		n[i++] = '0' + num % 10;
		num /= 10;
	}
	while (i > 0)
	{
		i--;
		p = n[i];
		write(fd, &p, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int	num;

	num = n;
	if (num == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else
	{
		if (num < 0)
		{
			num = -num;
			write(fd, "-", 1);
		}
		if (num == 0)
			write(fd, "0", 1);
		else
			ft_print(num, fd);
	}
}
