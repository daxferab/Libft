/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 21:45:22 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:07:13 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
int main(void)
{
    char char1 = 'A';
    char char2 = '5';
    char char3 = '*';

    int result1 = ft_isalnum(char1);
    printf("Character: '%c', Result: %d\n", char1, result1);

    int result2 = ft_isalnum(char2);
    printf("Character: '%c', Result: %d\n", char2, result2);

    int result3 = ft_isalnum(char3);
    printf("Character: '%c', Result: %d\n", char3, result3);

    return 0;
}
*/
