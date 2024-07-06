/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:12:12 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:09:29 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (i < ft_strlen(s))
		ft_putchar_fd(s[i++], fd);
}

/*
int main(void)
{
    ft_putstr_fd("Hello, World!", 1);
    ft_putchar_fd('\n', 1);

    return 0;
}
*/