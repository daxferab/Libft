/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 01:53:48 by daxferab          #+#    #+#             */
/*   Updated: 2024/10/16 13:44:49 by daxferna         ###   ########.fr       */
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
