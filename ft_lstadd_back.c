/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:31:44 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/19 17:46:23 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = ft_lstlast(*lst);
	if (!tmp)
		*lst = new;
	else
		tmp->next = new;
}

/*int main(void)
{
    t_list *head = (t_list *)malloc(sizeof(t_list));
    head->content = "First";
    head->next = NULL;
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    new_node->content = "New Node";
    new_node->next = NULL;

    ft_lstadd_back(&head, new_node);
    t_list *current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    free(new_node);
    free(head);
}*/
