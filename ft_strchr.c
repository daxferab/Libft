/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:10:25 by daxferna          #+#    #+#             */
/*   Updated: 2024/01/28 15:10:25 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

/*
int main(void)
{

    char *str1 = "Hello, World!";
    int char1 = 'o';
    char *result1 = ft_strchr(str1, char1);
    printf("Original String: \"%s\"\nCharacter:\
	 '%c'\nResult: %s\n\n", str1, char1, result1);

    return 0;
}
*/