/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_lstclear_bonus.c								:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: daxferna <daxferna@student.42madrid.com	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/02/29 17:47:58 by daxferna		  #+#	#+#			 */
/*   Updated: 2024/03/09 23:23:50 by daxferna		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		current = *lst;
		*lst = current->next;
		del(current->content);
		free(current);
	}
}

/*
void del(void *content)
{
	free(content);
}

int main()
{
	t_list *lista = malloc(sizeof(t_list));
	int *dato1 = malloc(sizeof(int)), *dato2 = malloc(sizeof(int));
	*dato1 = 42, *dato2 = 73;
	lista->content = dato1, lista->next = malloc(sizeof(t_list));
	lista->next->content = dato2, lista->next->next = NULL;

	printf("Lista: ");
	while (lista)
	{
		printf("%d ", *((int *)lista->content));
		lista = lista->next;
	}
	printf("\n");

	ft_lstclear(&lista, &del);

	printf("Lista borrada: ");
	while (lista)
	{
		printf("%d ", *((int *)lista->content));
		lista = lista->next;
	}
	printf("\n");

	return 0;
}
*/