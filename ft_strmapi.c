/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:01:46 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:08:53 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;

	p = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!p)
		return (0);
	i = 0;
	while (s[i] != 0)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = 0;
	return (p);
}

/*
char print_char(unsigned int index, char character)
{
    printf("%c", character);
	return character;
}

int main(void)
{
    char str1[] = "Hello";
    printf("Original String: \"%s\"\n", str1);

    char *result1 = ft_strmapi(str1, print_char);

    printf("\nModified String: \"%s\"\n\n", str1);

    free(result1);

    return 0;
}
*/