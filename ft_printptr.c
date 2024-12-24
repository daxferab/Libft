/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 02:14:27 by daxferab          #+#    #+#             */
/*   Updated: 2024/10/16 13:46:32 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printptr(size_t ptr)
{
	int	bytes;

	bytes = 0;
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	bytes += write(1, "0x", 2);
	bytes += ft_printhex(ptr, "0123456789abcdef");
	return (bytes);
}
