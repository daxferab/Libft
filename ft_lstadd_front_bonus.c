/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:21:39 by dxfrxg            #+#    #+#             */
/*   Updated: 2024/03/09 23:21:00 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int main()
{
    t_list *lista = 0;
    t_list nodo1 = {"hola", 0};
    t_list nodo2 = {"hello", 0};

    ft_lstadd_front(&lista, &nodo1);
    ft_lstadd_front(&lista, &nodo2);

    while (lista)
    {
        printf("%s ", (char *)lista->content);
        lista = lista->next;
    }

    return 0;
}
*/