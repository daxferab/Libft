/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:21:43 by dxfrxg            #+#    #+#             */
/*   Updated: 2024/03/09 23:42:40 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
int main()
{
    t_list *lista = malloc(sizeof(t_list));
    int *dato1 = malloc(sizeof(int)), *dato2 = malloc(sizeof(int));
    *dato1 = 42, *dato2 = 73;
    lista->content = dato1, lista->next = malloc(sizeof(t_list));
    lista->next->content = dato2, lista->next->next = NULL;

    t_list *inicio = lista;

    printf("Lista Original: ");
    while (lista)
    {
        printf("%d", *((int *)lista->content));
        if (lista->next)
            printf(" ");
        lista = lista->next;
    }
    printf("\n");

    t_list *ultimo = ft_lstlast(inicio);

    if (ultimo)
        printf("Ultimo elem: %d\n", *((int *)ultimo->content));
    else
        printf("Vacío:\n");

    return 0;
}
*/