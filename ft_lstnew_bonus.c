/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:21:37 by dxfrxg            #+#    #+#             */
/*   Updated: 2024/03/09 23:51:19 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = 0;
	return (node);
}

/*
int main()
{
    int *dato = malloc(sizeof(int));
    *dato = 42;

    t_list *nodo = ft_lstnew(dato);

    printf("Nuevo nodo: %d\n", *((int *)nodo->content));

    free(nodo->content);
    free(nodo);

    return 0;
}
*/