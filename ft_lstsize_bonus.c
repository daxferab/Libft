/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:21:41 by dxfrxg            #+#    #+#             */
/*   Updated: 2024/03/09 23:51:37 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*
int main()
{
    t_list *lista = malloc(sizeof(t_list));
    int *dato1 = malloc(sizeof(int)), *dato2 = malloc(sizeof(int));
    *dato1 = 42, *dato2 = 73;
    lista->content = dato1, lista->next = malloc(sizeof(t_list));
    lista->next->content = dato2, lista->next->next = NULL;

    printf("Tamaño: %d\n", ft_lstsize(lista));

    free(dato1);
    free(dato2);
    free(lista->next);
    free(lista);

    return 0;
}
*/