/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:01:31 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 04:23:37 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main(void)
{
    ft_putchar_fd('H', 1);
    ft_putchar_fd('\n', 1);

    ft_putchar_fd('E', 2);
    ft_putchar_fd('\n', 2);

    return 0;
}
*/
