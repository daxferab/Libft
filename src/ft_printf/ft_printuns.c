/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 02:50:08 by daxferab          #+#    #+#             */
/*   Updated: 2025/01/13 22:23:28 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_putuns(unsigned int num, int bytes)
{
	char	digit;

	if (num < 10)
	{
		digit = num + '0';
		bytes += write(1, &digit, 1);
	}
	else
	{
		bytes = ft_putuns(num / 10, bytes);
		digit = num % 10 + '0';
		bytes += write(1, &digit, 1);
	}
	return (bytes);
}

int	ft_printuns(int num)
{
	int	bytes;

	bytes = 0;
	return (ft_putuns(num, bytes));
}
