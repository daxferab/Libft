/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:10:03 by daxferna          #+#    #+#             */
/*   Updated: 2024/01/28 15:10:03 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}

/*
int main()
{
    const char *cadena = "Hola, mundo!";
    char caracter = 'o';

    char *resultado = ft_strrchr(cadena, caracter);

    if (resultado != 0)
        printf("Found in position %ld.\n", resultado - cadena);

    return 0;
}
*/