/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:17:28 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/22 11:27:06 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int main(void)
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->content = "First";
	head->next = (t_list *)malloc(sizeof(t_list));
	head->next->content = "Second";
	head->next->next = (t_list *)malloc(sizeof(t_list));
	head->next->next->content = "Third";
	head->next->next->next = NULL;

	t_list *last_node = ft_lstlast(head);
	printf("Last node content: %s\n", (char *)last_node->content);
	free(head->next->next);
	free(head->next);
	free(head);
}*/
