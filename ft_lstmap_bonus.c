/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:20:21 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:47:58 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst)
		return (0);
	new_list = 0;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node && del)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
void *add_ten(void *content)
{
    int *result = malloc(sizeof(int));
    *result = *((int *)content) + 10;
    return result;
}

void print_list(t_list *lista, void (*print_content)(void *))
{
    while (lista)
    {
        print_content(lista->content);
        if (lista->next)
            printf(" ");
        lista = lista->next;
    }
}

void print_int(void *content)
{
    printf("%d", *((int *)content));
}

int main()
{
    t_list *lista = malloc(sizeof(t_list));
    int *dato1 = malloc(sizeof(int)), *dato2 = malloc(sizeof(int));
    *dato1 = 42, *dato2 = 73;
    lista->content = dato1, lista->next = malloc(sizeof(t_list));
    lista->next->content = dato2, lista->next->next = NULL;

    printf("Lista Original: ");
    print_list(lista, &print_int);
    printf("\n");

    t_list *nueva_lista = ft_lstmap(lista, &add_ten, &free);

    printf("Lista Despues: ");
    print_list(nueva_lista, &print_int);
    printf("\n");

    ft_lstclear(&lista, &free);
    ft_lstclear(&nueva_lista, &free);

    return 0;
}
*/