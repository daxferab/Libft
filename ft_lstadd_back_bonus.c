/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:21:45 by dxfrxg            #+#    #+#             */
/*   Updated: 2024/03/09 23:16:23 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

/*
int main()
{
    t_list *lista = 0;
    t_list nodo1 = {"hola", 0};
    t_list nodo2 = {"hello", 0};

    ft_lstadd_back(&lista, &nodo1);
    ft_lstadd_back(&lista, &nodo2);

    while (lista)
    {
        printf("%s ", (char *)lista->content);
        lista = lista->next;
    }

    return 0;
}
*/