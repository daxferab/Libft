/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:38:00 by dxfrxg            #+#    #+#             */
/*   Updated: 2024/03/09 23:28:52 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

/*
void del(void *content)
{
	free(content);
}

int main()
{
    t_list *nodo = malloc(sizeof(t_list));
    int *dato = malloc(sizeof(int));
    *dato = 42;
    nodo->content = dato;
    nodo->next = 0;

    printf("Lista: ");
    while (nodo)
    {
        printf("%d ", *((int *)nodo->content));
        nodo = nodo->next;
    }
    printf("\n");

    ft_lstdelone(nodo, &del);

    printf("Lista borrada: ");
    while (nodo)
    {
        printf("%d ", *((int *)nodo->content));
        nodo = nodo->next;
	}

    return 0;
}
*/