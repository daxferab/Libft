/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:00:13 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/09 23:45:03 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void add_ten(void *content)
{
    *((int *)content) += 10;
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d", *((int *)lst->content));
        if (lst->next)
            printf(" ");
        lst = lst->next;
    }
    printf("\n");
}

int main()
{
    t_list *lista = malloc(sizeof(t_list));
    int *dato1 = malloc(sizeof(int)), *dato2 = malloc(sizeof(int));
    *dato1 = 42, *dato2 = 73;
    lista->content = dato1, lista->next = malloc(sizeof(t_list));
    lista->next->content = dato2, lista->next->next = NULL;

    printf("Lista Original: ");
    print_list(lista);

    ft_lstiter(lista, &add_ten);

    printf("Lista despues: ");
    print_list(lista);

    return 0;
}
*/