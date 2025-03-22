/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 01:53:48 by daxferab          #+#    #+#             */
/*   Updated: 2025/03/22 18:55:56 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printhex(size_t num, char *hex_list)
{
	int	bytes;

	bytes = 0;
	if (num >= 16)
		bytes += ft_printhex(num / 16, hex_list);
	bytes += ft_printchar(hex_list[num % 16]);
	return (bytes);
}
