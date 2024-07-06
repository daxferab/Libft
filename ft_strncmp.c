/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 00:03:45 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:08:49 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (str1[i] != 0 || str2[i] != 0))
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}

/*
int main()
{
    const char *cadena1 = "Hola, mundo!";
    const char *cadena2 = "Hola, que tal!";
    size_t n = 10;

    int resultado = ft_strncmp(cadena1, cadena2, n);

    printf("Resultado: %d", resultado);

    return 0;
}
*/