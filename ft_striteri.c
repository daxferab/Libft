/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:01:43 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:09:10 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void print_char(unsigned int index, char *character)
{
    printf("%c", *character);
}

int main(void)
{
    char str1[] = "Hello";
    printf("Original String: \"%s\"\n", str1);
    ft_striteri(str1, print_char);
    printf("Modified String: \"%s\"\n\n", str1);

    return 0;
}
*/
